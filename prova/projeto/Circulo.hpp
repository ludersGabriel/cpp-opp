#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"

class Circulo : public Forma {
 public:
  Circulo(double raio);
  virtual ~Circulo() = default;

  double getRaio() const;
  void setRaio(const double raio);

  virtual double getArea() const override;
  virtual double getPerimetro() const override;
  virtual std::string getTipo() const override;

 private:
  double raio;
  const double PI = 3.14;
};

#endif