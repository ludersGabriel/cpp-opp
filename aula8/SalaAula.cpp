#include "SalaAula.hpp"

#include <algorithm>
#include <iostream>

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
    : nome{nome}, capacidade{capacidade} {}

std::string SalaAula::getNome() { return this->nome; }

void SalaAula::setNome(std::string nome) { this->nome = nome; }

unsigned int SalaAula::getCapacidade() { return this->capacidade; }

void SalaAula::setCapcidade(unsigned int capacidade) {
  this->capacidade = capacidade;
}

void SalaAula::adiocionarDisciplina(Disciplina* disciplina) {
  if (disciplina->sala == this) return;

  if (disciplina->sala != nullptr) {
    disciplina->sala->disciplinasMinistradas.remove(disciplina);
  }

  disciplina->sala = this;

  this->disciplinasMinistradas.push_back(disciplina);
}

std::list<Disciplina*>& SalaAula::getDisciplinas() {
  return disciplinasMinistradas;
}

void SalaAula::printDisciplinas() {
  std::cout << "Disciplinas ministradas na sala " << this->nome << std::endl;

  if (disciplinasMinistradas.size() == 0) {
    std::cout << "Nenhuma disciplina ministrada nessa sala" << std::endl;
    return;
  }

  for (auto disciplina : disciplinasMinistradas) {
    std::cout << disciplina->getNome() << std::endl;
  }
}
