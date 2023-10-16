#include<iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include "command.hpp"
#include<thread>
int main(int argc, const char** argv) {
   
    //create socket for the server
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if(serverSocket == -1){
        std::cerr<<"ERROR in socket creation"<<std::endl;
        return 1;
    }
    // Bind the socket to an IP address and port
    struct sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY; // Bind to all available interfaces
    serverAddr.sin_port = htons(55555); // Port number

    if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) == -1) {
        std::cerr << "Error binding socket" << std::endl;
        return 1;
    }
        // Listen for incoming connections
    if (listen(serverSocket, 5) == -1) {
        std::cerr << "Error listening on socket" << std::endl;
        return 1;
    }
    std::cout << "Server listening on port 55555..." << std::endl;

     while (true) {
        // Accept a connection
        struct sockaddr_in clientAddr;
        socklen_t clientAddrSize = sizeof(clientAddr);
        int clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddr, &clientAddrSize);
            if (clientSocket == -1) {
            std::cerr << "Error accepting connection" << std::endl;
            continue;
        }
        std::cout << "Client connected" << std::endl;
        char buffer[1024];
        char menu[1024] = "\n1- Enter Firefox for firefox\n 2- enter calc for caclulator\n 3- enter term for teminal\n 4- enter nat for nautiluis\n";
        char errorval [1024] = "\nenter valid option\n";
        int bytesRead;
        send(clientSocket, menu, strlen(menu), 0);
 while (true) {
            
            bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);

            if (bytesRead <= 0) {
                std::cerr << "Client disconnected" << std::endl;
                break;
            } else {
                buffer[bytesRead] = '\0';
                std::cout << "Received: " << buffer << std::endl;
                if(strcmp(buffer, "firefox")==0){
                    openfirefox();
                }
                else if(strcmp(buffer, "calc")==0){
                    opencalc();
                }
                else if(strcmp(buffer, "term")==0){
                    openTerminal();
                }
                else if(strcmp(buffer, "nat")==0){
                    opensystem();
                }
                else{
                    send(clientSocket, errorval, strlen(errorval), 0);
                    send(clientSocket, menu, strlen(menu), 0);
                }
               
            }
        }

        close(clientSocket); // Close the client socket
    }

    close(serverSocket); // Close the server socket

    return 0;
}