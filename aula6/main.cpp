#include <iostream>
#include <string>

#include "Curso.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Curso c1{"Ciencia da Computacao", 2000, 3000};

  Pessoa* p1{new Pessoa{"Joao", 11111111111, 20}};
  Disciplina d1{"Orientacao a Objetos", c1};

  d1.setProfessor(p1);
  d1.setCargaHoraria(60);
  std::string cabecalho{"Dados da disciplina"};
  d1.imprimirDados(cabecalho, 4000);

  Curso& cRef = d1.getCursoVinculado();

  std::cout << "Nome do curso pela ref: " << cRef.getNomeCurso() << '\n';

  delete p1;
  return 0;
}