#include <iostream>

#include "Console.hpp"
#include "ConteudoMinistrado.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Pessoa prof1{"João", 11111111111, 40};
  Disciplina dis1{"C++", nullptr};
  dis1.setProfessor(&prof1);
  dis1.adicionarConteudoMinistrado("Ponteiros", 4);
  dis1.adicionarConteudoMinistrado("Referencias", 2);
  Console::imprimirDadosDisciplina(dis1);

  std::cout << "Removendo conteudo de id 1" << std::endl;
  dis1.removerConteudoMinistrado(1);

  Console::imprimirDadosDisciplina(dis1);

  std::cout << "Limpando conteudos" << std::endl;

  dis1.limparConteudosMinistrados();

  return 0;
}