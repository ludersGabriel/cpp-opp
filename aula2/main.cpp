#include <iostream>
#include <vector>

#include "Retangulo.hpp"

int main() {
  std::vector<Retangulo> retangulos;

  for (int i = 0; i < 10; i++) {
    retangulos.push_back(Retangulo(i, i));
  }

  for (int i = 0; i < 10; i++) {
    std::cout << "Retangulo " << i << ":\n";
    std::cout << "  Base: " << retangulos[i].base << "\n";
    std::cout << "  Altura: " << retangulos[i].altura << "\n";
    std::cout << "  Area: " << retangulos[i].getArea() << "\n";
    std::cout << "  Perimetro: " << retangulos[i].getPerimetro() << "\n";
  }

  std::cout << "Em particular, esses retângulos são quadrados..." << std::endl;

  return 0;
}