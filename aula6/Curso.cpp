#include "Curso.hpp"

Curso::Curso()
    : nomeCurso{"invalido"}, anoCriacao{2000}, cargaHorariaMinima{0} {}

Curso::Curso(std::string nomeCurso, uint16_t anoCriacao,
             unsigned short int cargaHorariaMinima)
    : nomeCurso{nomeCurso} {
  this->setAnoCriacao(anoCriacao);
  this->setCargaHorariaMinima(cargaHorariaMinima);
}

std::string Curso::getNomeCurso() { return nomeCurso; }

void Curso::setNomeCurso(std::string nomeCurso) { this->nomeCurso = nomeCurso; }

uint16_t Curso::getAnoCriacao() { return anoCriacao; }

void Curso::setAnoCriacao(uint16_t anoCriacao) {
  if (anoCriacao < 0) {
    anoCriacao = 0;
    return;
  }

  this->anoCriacao = anoCriacao;
}

unsigned short int Curso::getCargaHorariaMinima() { return cargaHorariaMinima; }

void Curso::setCargaHorariaMinima(unsigned short int cargaHorariaMinima) {
  if (cargaHorariaMinima < 0) {
    this->cargaHorariaMinima = 0;
    return;
  }

  this->cargaHorariaMinima = cargaHorariaMinima;
}
