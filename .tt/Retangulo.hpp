#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <iostream>
#include "Forma.hpp"

namespace lurdo {

class Retangulo : public Forma {
  friend std::ostream& operator<<(std::ostream& os, const Retangulo& retangulo);

 public:
  Retangulo(const double base, const double altura);
  virtual ~Retangulo() = default;

  void setBase(const double base);
  double getBase() const;

  void setAltura(const double altura);
  double getAltura() const;

  virtual double getArea() const override;
  virtual double getPerimetro() const override;

 private:
  double base;
  double altura;
};

}  // namespace lurdo

#endif