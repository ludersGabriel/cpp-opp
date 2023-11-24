

#ifndef VALOR_INVALIDO_EXCECAO_HPP
#define VALOR_INVALIDO_EXCECAO_HPP

#include <stdexcept>

namespace lurdo {

class ValorInvalidoExcecao : public std::runtime_error {
 public:
  const double v;

  ValorInvalidoExcecao(const double v);

  virtual ~ValorInvalidoExcecao() = default;
};

}  // namespace lurdo

#endif