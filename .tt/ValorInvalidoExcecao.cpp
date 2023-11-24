#include "ValorInvalidoExcecao.hpp"

using namespace lurdo;

ValorInvalidoExcecao::ValorInvalidoExcecao(const double v)
    : std::runtime_error{"Valor passado não condiz com os limites definidos"},
      v{v} {}
