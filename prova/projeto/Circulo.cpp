#include "Circulo.hpp"

Circulo::Circulo(double raio) : Forma("Circulo"), raio(raio) {}

double Circulo::getRaio() const { return this->raio; }

double Circulo::getArea() const { return PI * this->raio * this->raio; }

double Circulo::getPerimetro() const { return 2 * PI * this->raio; }

std::string Circulo::getTipo() const { return this->tipo; }