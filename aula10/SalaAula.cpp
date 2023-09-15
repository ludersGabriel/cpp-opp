#include "SalaAula.hpp"

#include <iostream>

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
    : nome{nome}, capacidade{capacidade} {}

SalaAula::~SalaAula() {
  std::cerr << this->disciplinasMinistradas.size() << std::endl;

  std::list<Disciplina*>::iterator it;
  for (it = disciplinasMinistradas.begin(); it != disciplinasMinistradas.end();
       it++) {
    (*it)->sala = nullptr;
  }
}

std::string SalaAula::getNome() { return this->nome; }

void SalaAula::setNome(std::string nome) { this->nome = nome; }

unsigned int SalaAula::getCapacidade() { return this->capacidade; }

void SalaAula::setCapcidade(unsigned int capacidade) {
  this->capacidade = capacidade;
}

std::list<Disciplina*>& SalaAula::getDisciplinas() {
  return disciplinasMinistradas;
}

void SalaAula::imprimirDados() {
  std::cout << "Sala: " << this->nome << std::endl;
  std::cout << "Capacidade: " << this->capacidade << std::endl;
  std::cout << "Disciplinas ministradas:" << std::endl;
  std::list<Disciplina*>::iterator it;
  for (it = disciplinasMinistradas.begin(); it != disciplinasMinistradas.end();
       it++) {
    std::cout << "\t" << (*it)->getNome() << std::endl;
  }
}