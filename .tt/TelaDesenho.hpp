#ifndef TELA_DESENHO_HPP
#define TELA_DESENHO_HPP

#include <vector>
#include <memory>

#include "Forma.hpp"

namespace lurdo {

class TelaDesenho {
 public:
  TelaDesenho();
  virtual ~TelaDesenho() = default;

  void adicionarForma(const std::shared_ptr<Forma> forma);

  double calcularAreaTotal() const;

  std::vector<std::shared_ptr<Forma>> const& getFormas() const;

  void limparFormas();

 private:
  std::vector<std::shared_ptr<Forma>> formas;
};

}  // namespace lurdo

#endif