#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
 public:
  Retangulo(float base, float altura);
  float getArea();
  float getPerimetro();

  float getBase();
  void setBase(float base);

  float getAltura();
  void setAltura(float altura);

 private:
  float base;
  float altura;
};

#endif