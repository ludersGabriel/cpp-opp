#ifndef FORMA_HPP
#define FORMA_HPP

#include <string>

class Forma {
 public:
  virtual ~Forma() = default;

  virtual double getArea() const = 0;
  virtual double getPerimetro() const = 0;

  virtual std::string getTipo() const = 0;
};

#endif