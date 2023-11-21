#include <iostream>
#include <list>
#include <string>

#include "ConteudoMinistrado.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"

int main() {
  Disciplina dis1{"C++", nullptr};
  Disciplina* dis2{new Disciplina{"Java", nullptr}};

  SalaAula sala{"Lab Info 1", 40};
  dis1.setSalaAula(&sala);
  dis2->setSalaAula(&sala);

  std::list<Disciplina*> disSala = sala.getDisciplinas();
  std::list<Disciplina*>::iterator it;
  for (it = disSala.begin(); it != disSala.end(); it++)
    std::cout << (*it)->getNome() << std::endl;

  delete dis2;
  std::cout << "Fim do Programa" << std::endl;

  return 0;
}

// Considere o protótipo da função membro a seguir e explique o objetivo de cada
// const na função: const double* calcularImposto(const Investimento* const inv)

/*
    O primeiro const é para dizer que o double dentro do ponteiro não pode ser
   alterado. O segundo quer dizer que o parametro é um ponteiro que aponta para
   um objeto constante, ou seja, o objeto não pode ser alterado. O terceiro
   const é para dizer que o ponteiro em si é constante e o quarto const é para
   dizer que a função é constante, ou seja, ela não pode alterar nenhum atributo
*/
