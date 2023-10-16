#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <thread> // Include the <thread> header for sleep

int main() {
    // Create a socket for the client
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        std::cerr << "Error creating socket" << std::endl;
        return 1;
    }

    // Define the server address and port
    struct sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(55555); // Port number
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // IP address (localhost)

    // Connect to the server
    if (connect(clientSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) == -1) {
        std::cerr << "Error connecting to the server" << std::endl;
        return 1;
    }

    std::cout << "Connected to the server" << std::endl;

    // Send data to the server
    std::this_thread::sleep_for(std::chrono::seconds(5));
    const char *message = "Hello,!!";
    send(clientSocket, message, strlen(message), 0);

    // Receive and display the server's response
    char buffer[1024];
    int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);
    buffer[bytesRead] = '\0';
    std::cout << "Received from server: " << buffer << std::endl;

    // Close the client socket
    close(clientSocket);

    return 0;
}
