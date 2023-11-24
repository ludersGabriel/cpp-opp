
#include "Circulo.hpp"
#include "ValorInvalidoExcecao.hpp"

namespace lurdo {

Circulo::Circulo(const double raio) : Forma{}, raio{raio} {}

void Circulo::setRaio(const double raio) {
  if (raio <= 0) throw ValorInvalidoExcecao(raio);

  this->raio = raio;
}

double Circulo::getRaio() const { return raio; }

double Circulo::getArea() const { return PI * raio * raio; }

double Circulo::getPerimetro() const { return 2 * PI * raio; }

std::ostream& operator<<(std::ostream& os, const Circulo& circulo) {
  os << "Dados do circulo: " << std::endl
     << "Raio: " << circulo.raio << std::endl
     << "Diametro: " << circulo.raio * 2 << std::endl
     << "Area: " << circulo.getArea() << std::endl
     << "Perimetro: " << circulo.getPerimetro() << std::endl
     << "--------------------------" << std::endl
     << std::endl;

  return os;
}

}  // namespace lurdo
