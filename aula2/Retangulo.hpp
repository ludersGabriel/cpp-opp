#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
 public:
  float base;
  float altura;

  Retangulo(float base, float altura);
  float getArea();
  float getPerimetro();
};

#endif