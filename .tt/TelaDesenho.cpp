
#include <iostream>

#include "Forma.hpp"
#include "TelaDesenho.hpp"

using namespace lurdo;

TelaDesenho::TelaDesenho() {}

void TelaDesenho::adicionarForma(const std::shared_ptr<Forma> forma) {
  formas.push_back(forma);
}

double TelaDesenho::calcularAreaTotal() const {
  double areaTotal{0};

  for (std::shared_ptr<Forma> const& forma : formas) {
    areaTotal += forma->getArea();
  }

  return areaTotal;
}

std::vector<std::shared_ptr<Forma>> const& TelaDesenho::getFormas() const {
  return formas;
}

void TelaDesenho::limparFormas() {
  std::cout << "Limpando formas..." << std::endl;
  formas.clear();
}
