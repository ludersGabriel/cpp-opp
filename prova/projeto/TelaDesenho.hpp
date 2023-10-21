#ifndef TELADESENHO_HPP
#define TELADESENHO_HPP

#include <vector>

#include "Forma.hpp"

class TelaDesenho {
 public:
  TelaDesenho();
  virtual ~TelaDesenho() = default;

  void adicionarForma(const Forma* const forma);
  double calcularAreaTotal() const;

  std::vector<const Forma*> const& getFormas() const;

  void limparFormas();

 private:
  std::vector<const Forma*> formas;
};

#endif