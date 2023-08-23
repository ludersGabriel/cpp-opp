#include "Disciplina.hpp"

#include <iostream>

Disciplina::Disciplina(std::string nome, Curso& cursoVinculado)
    : nome{nome}, cursoVinculado{cursoVinculado} {
  for (int i = 0; i < 50; i++) {
    alunos[i] = nullptr;
  }
}

std::string Disciplina::getNome() { return nome; }

void Disciplina::setNome(std::string nome) { this->nome = nome; }

int Disciplina::getCargaHoraria() { return cargaHoraria; }

void Disciplina::setCargaHoraria(unsigned int cargaHoraria) {
  this->cargaHoraria = cargaHoraria;
}

Pessoa* Disciplina::getProfessor() { return professor; }
void Disciplina::setProfessor(Pessoa* professor) {
  this->professor = professor;
}

std::string Disciplina::getNomeProfessor() { return professor->getNome(); }

void Disciplina::adicionarAluno(Pessoa* novoAluno) {
  for (int i = 0; i < 50; i++) {
    if (alunos[i] == nullptr) {
      alunos[i] = novoAluno;
      return;
    }
  }
}

Pessoa** Disciplina::getVetorAlunos() { return alunos; }

void Disciplina::imprimirDados(std::string& cabecalho,
                               unsigned int cargaTotalCurso) {
  double pctCurso = (double)cargaHoraria / cargaTotalCurso;
  pctCurso = pctCurso * 100;
  std::cout << cabecalho << '\n';
  std::cout << "Disciplina: " << nome << '\n';
  std::cout << "Carga: " << cargaHoraria << '\n';
  std::cout << "Porcentagem do curso: " << pctCurso << "%\n";
  std::cout << "Professor: " << professor->getNome() << '\n';
}

Curso& Disciplina::getCursoVinculado() { return cursoVinculado; }
void Disciplina::setCursoVinculado(Curso& cursoVinculado) {
  this->cursoVinculado = cursoVinculado;
}
