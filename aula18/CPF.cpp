#include "CPF.hpp"

#include <iomanip>

#include "CPFInvalidoException.hpp"

namespace ufpr {

CPF::CPF(const uint64_t numero) { this->setNumero(numero); }

uint64_t CPF::getNumero() const { return this->numero; }

void CPF::setNumero(const uint64_t numero) {
  if (!validarCPF(numero)) throw CPFInvalidoException{numero};
  this->numero = numero;
}

bool CPF::validarCPF(uint64_t cpfTeste) const {
  int somatorioValidaUltimo;
  int modulo;
  int somatorioValidaPenultimo = 0;
  int ultimo = cpfTeste % 10;
  cpfTeste = cpfTeste / 10;
  int penultimo = cpfTeste % 10;
  cpfTeste = cpfTeste / 10;

  somatorioValidaUltimo = penultimo * 2;
  for (int i = 2; i <= 11; i++) {
    modulo = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;
    somatorioValidaPenultimo += modulo * i;
    somatorioValidaUltimo += modulo * (i + 1);
  }
  modulo = somatorioValidaPenultimo % 11;
  if (modulo < 2) {
    if (!penultimo) return false;  // cpf invalido
  } else {
    if (penultimo != 11 - modulo) return false;  // cpf invalido
  }
  modulo = somatorioValidaUltimo % 11;
  if (modulo < 2) {
    if (!ultimo) return false;  // cpf invalido
  } else {
    if (ultimo != 11 - modulo) return false;  // cpf invalido
  }
  return true;  // cpf valido
}

bool CPF::operator==(const CPF& outro) const {
  return this->numero == outro.numero;
}

bool CPF::operator!=(const CPF& outro) const { return !(*this == outro); }

bool CPF::operator<(const CPF& outro) const {
  return this->numero < outro.numero;
}

bool CPF::operator>(const CPF& outro) const { return (outro < *this); }

bool CPF::operator<=(const CPF& outro) const { return !(*this > outro); }

bool CPF::operator>=(const CPF& outro) const { return !(*this < outro); }

const CPF& CPF::operator=(const CPF& outro) {
  if (&outro != this) {  // cuidado com auto atribuição
    this->numero = outro.numero;
  }
  return *this;  // para permitir x = y = z
}

const CPF& CPF::operator=(const unsigned long numero) {
  if (!validarCPF(numero)) throw CPFInvalidoException{numero};
  this->numero = numero;
  return *this;
}

unsigned short CPF::operator[](const int idx) const {
  if (idx < 0 || idx > 10) throw std::out_of_range{"CPF::operator[]"};

  uint64_t prim{this->numero};

  for (int i = 10; i > idx; i--) {
    prim /= 10;
  }

  return (unsigned short)(prim % 10);
}

unsigned long CPF::operator()(int posicao, int tamanho) const {
  if (posicao < 0 || tamanho < 0 || posicao + tamanho > 11)
    throw std::out_of_range{"CPF::operator()"};

  std::string cpf_str = std::to_string(this->numero);
  cpf_str = cpf_str.substr(posicao, tamanho);

  return std::stoul(cpf_str);
}

std::ostream& operator<<(std::ostream& stream, const ufpr::CPF& cpf) {
  unsigned int verificador{(unsigned int)(cpf.numero % 100)};
  unsigned long prim{cpf.numero / 100};
  unsigned int ter{(unsigned int)(prim % 1000)};
  prim /= 1000;
  unsigned int seg{(unsigned int)(prim % 1000)};
  prim /= 1000;

  stream << std::setw(3) << std::setfill('0');
  stream << prim << '.' << seg << '.' << ter << '-' << verificador;
  return stream;  // permitir cout << a << b << c;
}

std::istream& operator>>(std::istream& stream, ufpr::CPF& cpf) {
  unsigned long numero;
  stream >> numero;
  cpf.setNumero(numero);
  return stream;  // permitir cin >> a >> b >> c;
}

}  // namespace ufpr