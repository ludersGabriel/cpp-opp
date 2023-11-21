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
  dis1.adicionarConteudoMinistrado("ponteiros", 3);
  dis1.adicionarConteudoMinistrado("ponteiros", 3);
  dis1.adicionarConteudoMinistrado("ponteiros", 3);
  dis1.adicionarConteudoMinistrado("ponteiros", 3);

  std::list<ConteudoMinistrado*>& conteudos = dis1.getConteudos();

  for (auto conteudo : conteudos) {
    std::cout << conteudo->getDescricao() << std::endl;
  }

  dis1.removerConteudoMinistrado("ponteiros");
  dis1.limparConteudosMinistrados();

  for (auto conteudo : conteudos) {
    std::cout << conteudo->getDescricao() << std::endl;
  }

  return 0;
}