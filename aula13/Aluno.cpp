#include "Aluno.hpp"

Aluno::Aluno(const std::string& nome, const uint64_t cpf,
             const unsigned short idade, const int matricula, const double ira)
    : Pessoa{nome, cpf, idade}, matricula{matricula}, ira{ira} {}

Aluno::~Aluno() {}

void Aluno::setMatricula(const int matricula) { this->matricula = matricula; }

int Aluno::getMatricula() const { return this->matricula; }

void Aluno::setIra(const double ira) { this->ira = ira; }

double Aluno::getIra() const { return this->ira; }