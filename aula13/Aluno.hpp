#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"

class Aluno : public Pessoa {
 public:
  Aluno(const std::string& nome, const uint64_t cpf, const unsigned short idade,
        const int matricula, const double ira);
  ~Aluno();

  void setMatricula(const int matricula);
  int getMatricula() const;

  void setIra(const double ira);
  double getIra() const;

 private:
  int matricula;
  double ira;
};

#endif