#ifndef RECT_HPP
#define RECT_HPP

#include "Forma.hpp"

class Rectangle : public Forma {
 public:
  Rectangle(int width, int height);
  virtual ~Rectangle() = default;

  int getWidth() const;
  int getHeight() const;

  virtual const int getArea() const override;
  virtual int getPerimeter() const override;

 private:
  int width;
  int height;
};

#endif