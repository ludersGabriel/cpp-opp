#include "Retangulo.hpp"

Retangulo::Retangulo() : base(0), altura(0) {}

Retangulo::Retangulo(float base, float altura) {
  this->setAltura(altura);
  this->setBase(base);
}

float Retangulo::getBase() { return this->base; }
float Retangulo::getAltura() { return this->altura; }

void Retangulo::setBase(float base) {
  if (base < 0) base = 0;

  this->base = base;
}
void Retangulo::setAltura(float altura) {
  if (altura < 0) altura = 0;

  this->altura = altura;
}

float Retangulo::getArea() { return this->getBase() * this->getAltura(); }
float Retangulo::getPerimetro() {
  return 2 * (this->getBase() + this->getAltura());
}