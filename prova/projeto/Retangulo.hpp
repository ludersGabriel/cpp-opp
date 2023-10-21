#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <string>

#include "Forma.hpp"

class Retangulo : public Forma {
 public:
  Retangulo(double width, double height);
  virtual ~Retangulo() = default;

  double getWidth() const;
  double getHeight() const;

  void setWidth(const double width);
  void setHeight(const double Height);

  virtual double getArea() const override;
  virtual double getPerimetro() const override;

  virtual std::string getTipo() const override;

 private:
  double width;
  double height;
};

#endif