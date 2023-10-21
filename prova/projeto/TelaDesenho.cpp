
#include "TelaDesenho.hpp"

#include <iostream>

TelaDesenho::TelaDesenho() {}

// TelaDesenho::~TelaDesenho() {
//   for (const Forma* const forma : this->formas) {
//     if (forma != nullptr) delete forma;
//   }
// }

void TelaDesenho::adicionarForma(const Forma* const forma) {
  std::cout << "Adicionando forma: " << forma->getTipo() << std::endl;
  this->formas.push_back(forma);
}

double TelaDesenho::calcularAreaTotal() const {
  double areaTotal = 0;

  for (const Forma* const forma : this->formas) {
    areaTotal += forma->getArea();
  }

  return areaTotal;
}

std::vector<const Forma*> const& TelaDesenho::getFormas() const {
  return this->formas;
}

void TelaDesenho::limparFormas() {
  std::cout << "Removendo formas da tela" << std::endl;
  this->formas.clear();
}
