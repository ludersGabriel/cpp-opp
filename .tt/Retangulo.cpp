#include "Retangulo.hpp"

namespace lurdo {

Retangulo::Retangulo(const double base, const double altura)
    : Forma{}, base{base}, altura{altura} {}

void Retangulo::setBase(const double base) { this->base = base; }

double Retangulo::getBase() const { return base; }

void Retangulo::setAltura(const double altura) { this->altura = altura; }

double Retangulo::getAltura() const { return altura; }

double Retangulo::getArea() const { return base * altura; }

double Retangulo::getPerimetro() const { return 2 * (base + altura); }

std::ostream& operator<<(std::ostream& os, const Retangulo& retangulo) {
  os << "Dados do retangulo: " << std::endl
     << "Base: " << retangulo.base << std::endl
     << "Altura: " << retangulo.altura << std::endl
     << "Area: " << retangulo.getArea() << std::endl
     << "Perimetro: " << retangulo.getPerimetro() << std::endl
     << "--------------------------" << std::endl
     << std::endl;

  return os;
}

}  // namespace lurdo
