#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class Disciplina {
 public:
  Disciplina(std::string nomeDisciplina);

  std::string getNome();
  void setNome(std::string novoNome);

  int getCargaHoraria();
  void setCargaHoraria(unsigned int novaCarga);

  Pessoa* getProfessor();
  void setProfessor(Pessoa* prof);

  std::string getNomeProfessor();

  void adicionarAluno(Pessoa* novoAluno);
  Pessoa** getVetorAlunos();

 private:
  std::string nome;
  unsigned short int cargaHoraria;
  Pessoa* professor;
  Pessoa* alunos[50];
};
#endif
