#include <iostream>

#include "ClasseA.hpp"
#include "ClasseB.hpp"
#include "ClasseC.hpp"

int main() {
  ClasseA* ptr = new ClasseC{};
  std::cout << ptr->getValor() << '\n';
  delete ptr;

  return 0;
}
