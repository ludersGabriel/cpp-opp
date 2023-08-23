#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nomeDisciplina) : nome{nomeDisciplina} {
  for (int i = 0; i < 50; i++) {
    alunos[i] = nullptr;
  }
}

std::string Disciplina::getNome() { return nome; }

void Disciplina::setNome(std::string novoNome) { nome = novoNome; }

int Disciplina::getCargaHoraria() { return cargaHoraria; }

void Disciplina::setCargaHoraria(unsigned int novaCarga) {
  cargaHoraria = novaCarga;
}

Pessoa* Disciplina::getProfessor() { return professor; }
void Disciplina::setProfessor(Pessoa* prof) { professor = prof; }

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