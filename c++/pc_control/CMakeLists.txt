cmake_minimum_required(VERSION 3.11)

project(pc_ctrl VERSION 1.0)

add_executable(pc ${CMAKE_SOURCE_DIR}/src/main.cpp
                  ${CMAKE_SOURCE_DIR}/src/command.cpp)

target_include_directories(pc PRIVATE ${CMAKE_SOURCE_DIR}/includes)