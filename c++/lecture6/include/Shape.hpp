#pragma once
#include"Drawable.hpp"

class Shape: public Drawable{
private:

public:
Shape()= default;
void draw() override;

};