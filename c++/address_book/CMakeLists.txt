#Set the minimum required version
cmake_minimum_required(VERSION 3.0)

#define prokect name and version 

project(cpp_project VERSION 1.0)

#include the includes of the files
include_directories(proj ${CMAKE_SOURCE_DIR}/include)

#add executable to the target name 

add_executable(proj ${CMAKE_SOURCE_DIR}/src/address.cpp)



