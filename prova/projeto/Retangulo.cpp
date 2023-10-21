#include "Retangulo.hpp"

#include <iostream>

Retangulo::Retangulo(double width, double height)
    : Forma("Retangulo"), width{width}, height{height} {}

double Retangulo::getWidth() const { return this->width; }
double Retangulo::getHeight() const { return this->height; }

void Retangulo::setWidth(const double width) { this->width = width; }
void Retangulo::setHeight(const double height) { this->height = height; }

double Retangulo::getArea() const { return this->width * this->height; }
double Retangulo::getPerimetro() const {
  return 2 * (this->width + this->height);
}

std::string Retangulo::getTipo() const { return this->tipo; }