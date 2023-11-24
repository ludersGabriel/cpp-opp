

#include <iostream>
#include <memory>

#include "Circulo.hpp"
#include "Retangulo.hpp"
#include "TelaDesenho.hpp"
#include "ValorInvalidoExcecao.hpp"

int main() {
  lurdo::TelaDesenho telaDesenho;

  std::shared_ptr<lurdo::Circulo> circulo = std::make_shared<lurdo::Circulo>(5);
  std::shared_ptr<lurdo::Retangulo> retangulo =
      std::make_shared<lurdo::Retangulo>(5, 10);

  try {
    circulo->setRaio(-5);
  } catch (const lurdo::ValorInvalidoExcecao& e) {
    std::cout << e.what() << ": " << e.v << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Erro desconhecido: " << e.what() << std::endl;
  }

  telaDesenho.adicionarForma(circulo);
  telaDesenho.adicionarForma(retangulo);

  std::cout << std::endl << "Dados individuais" << std::endl;
  std::cout << *circulo << std::endl;
  std::cout << *retangulo << std::endl;

  std::cout << "Area total: " << telaDesenho.calcularAreaTotal() << std::endl;

  telaDesenho.limparFormas();

  std::cout << "Area total após limpar: " << telaDesenho.calcularAreaTotal()
            << std::endl;

  return 0;
}