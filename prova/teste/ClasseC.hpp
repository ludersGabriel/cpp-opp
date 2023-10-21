#ifndef CLASSE_C_HPP
#define CLASSE_C_HPP

#include "ClasseB.hpp"

class ClasseC : public ClasseB {
 public:
  virtual ~ClasseC() = default;
  int getValor() const { return 3; }
};

#endif
