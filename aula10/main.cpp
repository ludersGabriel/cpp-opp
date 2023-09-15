#include <iostream>

#include "Console.hpp"
#include "ConteudoMinistrado.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "SalaAula.hpp"

int main() {
  Pessoa prof1{"João", 11111111111, 40};
  Disciplina* dis1{new Disciplina{"C++", nullptr}};
  SalaAula* sala1{new SalaAula{"Sala 1", 40}};

  dis1->setProfessor(&prof1);
  dis1->adicionarConteudoMinistrado("Ponteiros", 4);
  dis1->adicionarConteudoMinistrado("Referencias", 2);
  Console::imprimirDadosDisciplina(*dis1);

  dis1->setSalaAula(sala1);

  delete sala1;

  std::cerr << "deletada a sala\n";

  delete dis1;

  std::cerr << "Fim do programa" << std::endl;

  return 0;
}