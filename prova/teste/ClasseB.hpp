#ifndef CLASSE_B_HPP
#define CLASSE_B_HPP

#include "ClasseA.hpp"

class ClasseB : public ClasseA {
 public:
  virtual ~ClasseB() = default;
  int getValor() const { return 2; }
};

#endif
