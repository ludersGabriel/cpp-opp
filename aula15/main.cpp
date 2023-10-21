#include <iostream>
#include "ProfessorEngenheiro.hpp"
#include "Professor.hpp"
#include "Engenheiro.hpp"

int main() {
  ProfessorEngenheiro pe{"Maria", 11111111111, 85, 40, 1234};
  std::cout << pe.getNome() << ' ' << pe.getSalario() << '\n';
  return 0;
}

/*
  Em CPP uma interface seria uma classe cujos todos métodos
  são puramente virtuais, ou seja, não possuem implementação.

  Problemas como o problema do diamante são apenas resolvidos
  com herança múltipla.
*/