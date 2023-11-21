#include <iostream>
#include <list>

#include "Ementa.hpp"
#include "Disciplina.hpp"
#include "Console.hpp"

int main() {
  ufpr::Disciplina d1{"Programação Orientada a Objetos"};
  ufpr::Disciplina d2{"teste"};
  ufpr::Disciplina d3{"teste3"};

  d2 = d3 = d1;

  std::cout << "d1: " << d1.getNome() << std::endl;
  std::cout << "d2: " << d2.getNome() << std::endl;
  std::cout << "d3: " << d3.getNome() << std::endl;

  return 0;
}