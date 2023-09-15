#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class SalaAula;

class Disciplina {
  friend class SalaAula;

 public:
  Disciplina(std::string nome);
  Disciplina(std::string nome, SalaAula* sala);

  std::string getNome();
  void setNome(std::string nome);

  int getCargaHoraria();
  void setCargaHoraria(unsigned int carga);

  Pessoa* getProfessor();
  void setProfessor(Pessoa* prof);

  void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

  void setSalaAula(SalaAula* sala);
  SalaAula* getSalaAula();

 private:
  std::string nome;
  unsigned short int cargaHoraria;
  Pessoa* professor;
  SalaAula* sala;
};
#endif