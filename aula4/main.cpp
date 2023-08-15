#include <iostream>
#include <string>
#include <vector>

#include "Retangulo.hpp"

int main() {
  std::vector<Retangulo> retangulos;

  for (int i = 0; i < 10; i++) {
    retangulos.push_back(
        Retangulo{static_cast<float>(i), static_cast<float>(i)});
  }

  for (int i = 0; i < 10; i++) {
    std::cout << "Retangulo " << i << ":\n";
    std::cout << "  Base: " << retangulos[i].getBase() << "\n";
    std::cout << "  Altura: " << retangulos[i].getAltura() << "\n";
    std::cout << "  Area: " << retangulos[i].getArea() << "\n";
    std::cout << "  Perimetro: " << retangulos[i].getPerimetro() << "\n";
  }

  std::cout << "Em particular, esses retângulos são quadrados..." << std::endl;

  std::string eco;
  std::cout << "Digite uma mensagem: ";
  std::getline(std::cin, eco);

  std::cout << "Aqui está o eco da sua mensagem: " << eco << std::endl;

  std::cout << "Há um comentário na main sobre modelos anêmicos." << std::endl;

  std::cout << "Agora um retangulo criado com o construtor padrão: "
            << std::endl;
  Retangulo retanguloPadrao;
  std::cout << "  Base: " << retanguloPadrao.getBase() << "\n";
  std::cout << "  Altura: " << retanguloPadrao.getAltura() << "\n";
  std::cout << "É um retangulo bem sem graça..." << std::endl;

  return 0;
}

// Sobre modelos anêmicos:
/*
  Pelo que entendi, modelos anêmicos são modelos que não possuem nenhum
  comportamento definido. Em outras palavras, esse modelo aparece quando
  há classes que possuem apenas atributos e métodos getters e setters sem
  nenhuma lógica definida. Isso é ruim porque, se o modelo não possui
  comportamento, ele não é capaz de fazer nada. Ele é apenas um amontoado
  de dados que não podem ser manipulados de nenhuma forma ou depende de uma
  classe terceira para ser manipulado, como uma classe Pessoa e uma classe
  ServiçoPessoa, por exemplo.

  Para trazer mais próximo da minha classe Retangulo, seria como se na classe
  retangulo eu tivesse apenas os atributos base e altura e os métodos getters
  e uma outra classe ServicoRetangulo que tivesse os métodos getArea e
  getPerimetro. Isso é ruim porque, se eu quiser calcular a área de um
  retângulo, eu preciso criar um objeto ServicoRetangulo e passar o objeto
  Retangulo para ele, por ex.
*/