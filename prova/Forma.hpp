#ifndef FORMA_HPP
#define FORMA_HPP

class Forma {
 public:
  virtual ~Forma() = default;

  virtual const int getArea() = 0;
  virtual int getPerimeter() const = 0;
};

#endif