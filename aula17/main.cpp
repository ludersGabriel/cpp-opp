#include <iostream>
#include <stdexcept>

#include "Disciplina.hpp"
#include "EnumTipoDisciplina.hpp"

int main() {
  ufpr::Disciplina d1{"Programação I", nullptr,
                      ufpr::EnumTipoDisciplina::MANDATORIA};

  std::cout << "Disciplina: " << d1.getNome() << std::endl;

  d1.setCargaHoraria(20);

  return 0;
}
