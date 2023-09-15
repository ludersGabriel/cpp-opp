#include <iostream>
#include <list>

#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "SalaAula.hpp"
int main() {
  SalaAula sala{"Lab Info 1", 20};
  SalaAula sala2{"Lab Info 2", 20};

  Disciplina dis1{"Orientacao a Objetos", &sala};
  Disciplina dis2{"Sistemas Operacionais", &sala};

  dis1.setSalaAula(&sala2);
  sala2.adiocionarDisciplina(&dis2);

  sala.printDisciplinas();

  std::cout << std::endl;

  sala2.printDisciplinas();

  std::cout << std::endl;

  std::cout << "Checando consistencia\n" << std::endl;

  dis1.setSalaAula(&sala);
  sala.adiocionarDisciplina(&dis2);

  sala.printDisciplinas();

  std::cout << std::endl;

  sala2.printDisciplinas();

  std::cout << std::endl;

  return 0;
}