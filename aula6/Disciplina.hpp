#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Curso.hpp"
#include "Pessoa.hpp"

class Disciplina {
 public:
  Disciplina(std::string nome, Curso& curso);

  std::string getNome();
  void setNome(std::string nome);

  int getCargaHoraria();
  void setCargaHoraria(unsigned int cargaHoraria);

  Pessoa* getProfessor();
  void setProfessor(Pessoa* professor);

  std::string getNomeProfessor();

  void adicionarAluno(Pessoa* aluno);
  Pessoa** getVetorAlunos();

  void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

  Curso& getCursoVinculado();
  void setCursoVinculado(Curso& curso);

 private:
  std::string nome;
  unsigned short int cargaHoraria;
  Pessoa* professor;
  Pessoa* alunos[50];
  Curso& cursoVinculado;
};
#endif
