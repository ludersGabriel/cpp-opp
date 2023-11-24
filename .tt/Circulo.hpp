#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <iostream>
#include "Forma.hpp"

namespace lurdo {

class Circulo : public Forma {
  friend std::ostream& operator<<(std::ostream& os, const Circulo& circulo);

 public:
  explicit Circulo(const double raio);
  virtual ~Circulo() = default;

  void setRaio(const double raio);
  double getRaio() const;

  virtual double getArea() const override;
  virtual double getPerimetro() const override;

 private:
  double raio;
  constexpr static double PI = 3.14;
};

}  // namespace lurdo

#endif