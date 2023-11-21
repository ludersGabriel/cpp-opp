#include <iostream>
#include "CPF.hpp"

int main() {
  // abra um gerador de cpf e coloque
  // um cpf que começa com 0
  ufpr::CPF cpf1;
  std::cin >> cpf1;
  std::cout << cpf1 << '\n';

  for (int i = 0; i < 11; i++) {
    std::cout << cpf1[i] << '\n';
  }

  std::cout << cpf1(0, 3) << '\n';

  return 0;
}