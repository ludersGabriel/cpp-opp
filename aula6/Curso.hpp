#ifndef CURSO_HPP
#define CURSO_HPP

#include <string>

class Curso {
 public:
  Curso();
  Curso(std::string nomeCurso, uint16_t anoCriacao,
        unsigned short int cargaHorariaMinima);
  std::string getNomeCurso();
  void setNomeCurso(std::string nomeCurso);
  uint16_t getAnoCriacao();
  void setAnoCriacao(uint16_t anoCriacao);
  unsigned short int getCargaHorariaMinima();
  void setCargaHorariaMinima(unsigned short int cargaHorariaMinima);

 private:
  std::string nomeCurso;
  uint16_t anoCriacao;
  unsigned short int cargaHorariaMinima;
};

#endif