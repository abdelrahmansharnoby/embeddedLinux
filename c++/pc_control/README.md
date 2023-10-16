# Remote Control Server

## Project Description

The **Remote Control Server** is a C++ project designed to provide users with the ability to remotely control their personal computer from a mobile application. The project involves creating a server application that runs on the user's PC, allowing it to receive commands from a mobile app and execute various actions, such as opening a terminal, a web browser, or a calculator.

## Features

- **Server-Client Communication**: The project implements a server-client architecture where the C++ server application runs on the user's PC, and a mobile app acts as the client. The two communicate over a network connection, enabling the mobile app to send commands to the server.

- **Secure Communication**: To ensure security, the project can be extended to include secure communication protocols, such as encryption, authentication, and authorization.

- **Remote Commands**: The server accepts commands from the client to perform specific actions on the host PC. Supported commands include:
  - Opening a terminal window
  - Launching a web browser (e.g., Firefox)
  - Starting a calculator application
  - Exploring the file system (e.g., opening a file manager)

- **Socket Programming**: The server uses C++ socket programming to establish and maintain communication with the client. The server listens on a specific port for incoming connections and processes client requests.

- **System Commands**: The project leverages C++'s system function to execute system commands. This enables the server to respond to client commands effectively.

## Usage

1. **Server Setup**: Users need to set up the server application on their PC. This involves compiling and running the C++ server code. The server listens for incoming connections on a specified port (e.g., 55555).

2. **Mobile App**: Users install the mobile app (e.g., TCP/UDP API Tester) on their mobile device, configure the app to connect to the server's IP address and port, and use the app's interface to send commands to the server.

3. **Remote Control**: Once connected, users can send commands from the mobile app to control their PC. For example, sending the "term" command will result in the server launching a terminal window.

## Future Enhancements

- **Security**: Implement secure communication protocols to protect the system from unauthorized access.

- **Extended Command Set**: Expand the list of supported commands for more control over the host PC.


## Credits

The project is developed by Abdelrahman Ahmed. It makes use of C++ socket programming and the system function. Special thanks for ENG:moatassem el sayed for 
supervision and support

For any inquiries or contributions, please contact abdelrahmanabdelsamaie@gmail.com.



