#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include "Disciplina.hpp"

class Console {
 public:
  Console();
  ~Console();
  static void imprimirDadosDisciplina(Disciplina& disciplina);
};
#endif
