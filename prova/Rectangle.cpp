#include "Rectangle.hpp"

Rectangle::Rectangle(int width, int height) : width(width), height(height) {}

int Rectangle::getWidth() const { return width; }

int Rectangle::getHeight() const { return height; }

const int Rectangle::getArea() { return width * height; }

int Rectangle::getPerimeter() const { return 2 * (width + height); }
