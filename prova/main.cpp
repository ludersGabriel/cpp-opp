#include <iostream>

#include "Rectangle.hpp"

int main() {
  Rectangle r{3, 4};

  std::cout << "Width: " << r.getWidth() << std::endl;
  std::cout << "Height: " << r.getHeight() << std::endl;
  std::cout << "Area: " << r.getArea() << std::endl;
  std::cout << "Perimeter: " << r.getPerimeter() << std::endl;

  return 0;
}