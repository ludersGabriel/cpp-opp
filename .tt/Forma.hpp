#ifndef FORMA_HPP
#define FORMA_HPP

namespace lurdo {

class Forma {
 public:
  Forma() = default;
  virtual ~Forma() = default;

  virtual double getArea() const = 0;
  virtual double getPerimetro() const = 0;
};

}  // namespace lurdo

#endif