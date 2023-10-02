cmake_minimum_required(VERSION 3.0)
project(my_project VERSION 1.0)

set(SRC_FILES
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/Triangle.cpp
    ${CMAKE_SOURCE_DIR}/src/Rectangle.cpp
    ${CMAKE_SOURCE_DIR}/src/Shape.cpp
)

add_executable(lol ${SRC_FILES})

target_include_directories(lol PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_compile_options(lol PRIVATE -g -O0)
