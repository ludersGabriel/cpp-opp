#include <iostream>
#include <string>

#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Disciplina* poo{new Disciplina{"Programação Orientada a Objetos"}};
  Pessoa* prof{new Pessoa{"Prof. Pardal", 12345678901, 40}};
  poo->setProfessor(prof);

  for (uint8_t i = 0; i < 10; i++) {
    poo->adicionarAluno(new Pessoa{"Aluno " + std::to_string(i),
                                   static_cast<uint64_t>(12345678902) + i,
                                   static_cast<uint8_t>(18 + i)});
  }

  Pessoa** alunos = poo->getVetorAlunos();

  for (int i = 0; i < 10; i++) {
    std::cout << alunos[i]->getNome() << std::endl;
  }

  for (int i = 0; i < 10; i++) {
    delete alunos[i];
  }

  delete prof;
  delete poo;

  return 0;
}