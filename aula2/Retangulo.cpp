#include "Retangulo.hpp"

Retangulo::Retangulo(float base, float altura) {
  this->base = base;
  this->altura = altura;
}

float Retangulo::getArea() { return this->base * this->altura; }

float Retangulo::getPerimetro() { return 2 * (this->base + this->altura); }