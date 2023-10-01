cmake_minimum_required(VERSION 3.0)
project(str VERSION 1.0)

add_executable(str ${CMAKE_SOURCE_DIR}/main.cpp
                   ${CMAKE_SOURCE_DIR}/str.cpp)
# target_include_directories(str ${CMAKE_SOURCE_DIR})
target_compile_options(str PRIVATE -g -O0)