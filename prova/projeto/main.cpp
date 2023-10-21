#include <iostream>
#include <vector>

#include "Circulo.hpp"
#include "Retangulo.hpp"
#include "TelaDesenho.hpp"

int main() {
  Retangulo retangulo(10, 20);
  Circulo circulo(10);
  TelaDesenho telaDesenho;

  telaDesenho.adicionarForma(&retangulo);
  telaDesenho.adicionarForma(&circulo);

  std::vector<const Forma*> const& formas = telaDesenho.getFormas();

  std::cout << "Mostrando áreas individuais apenas para provar corretude"
            << std::endl;
  for (const Forma* const forma : formas) {
    std::string tipo = forma->getTipo();
    std::cout << "Area (" << tipo << "): " << forma->getArea() << std::endl;
  }

  std::cout << "Area total: " << telaDesenho.calcularAreaTotal() << std::endl;

  telaDesenho.limparFormas();

  std::cout << "Area total após tela limpa: " << telaDesenho.calcularAreaTotal()
            << std::endl;

  return 0;
}

/*
  Gostaria de comentar que não implementei destrutores com amizade devido a
  associação fornecida no diagrama UML. Como apenas a classe TelaDesenho conhece
  as formas, se eu tentasse deletar os ponteiros, por exemplo, do vetor de
  formas na hora da destruição de telaDesenho, cairiamos no mesmo problema de
  disciplina x sala visto em sala. Naquela situação, contudo, a associação era
  bidirecional então podiamos acessar as variáveis dos outros lados e nos
  remover quando necessário.

  Deixei comentado um possível destrutor para a classe TelaDesenho, destrutores
  para as formas poderiam ser similares a ideia vista em sala: ao destruir uma
  forma, ela se remove do vetor telaDesenho. Dessa forma, teriamos que ao
  destruir uma telaDesenho, ela removeria todas as formas que ela conhece, e ao
  destruir uma forma, ela se removeria da telaDesenho.

*/