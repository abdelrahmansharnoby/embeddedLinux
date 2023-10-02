#include <iostream>
#include "Shape.hpp"
#include "Drawable.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"

int main(int argc, const char** argv) {
    
    Rectangle rectangle;
    Triangle triangle;
    Shape shapee;

    // Create an array of pointers to the Drawable interface
    Drawable* shapes[] = {  &shapee,&rectangle, &triangle };

    // Iterate through the array and call draw() on each object
    for (const auto& shape : shapes) {
        shape->draw();
    }

    return 0;
}

