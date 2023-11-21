#include <iostream>

#include "Aluno.hpp"
#include "Disciplina.hpp"
#include "Professor.hpp"
#include "ProfessorAdjunto.hpp"

int main() {
  ProfessorAdjunto p{"Joao", 11111111111, 85, 40};
  Professor p2{"Pedro", 11111111111, 85, 40};

  Disciplina d{"POO"};

  Aluno a{"Maria", 11111111111, 20, 123456, 9.5};

  d.setProfessor(&p);
  d.adicionarAluno(&a);

  const std::list<Aluno *> &alunos = d.getAlunos();

  std::cout << "Alunos da disciplina " << d.getNome() << ":\n";
  for (const auto &aluno : alunos) {
    std::cout << aluno->getNome() << "\n";
  }

  std::cout << p.getNome() << " R$" << p.getSalario() << ",00\n";
  std::cout << p2.getNome() << " R$" << p2.getSalario() << ",00\n";
  return 0;
}