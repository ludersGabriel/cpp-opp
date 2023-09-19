#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "ConteudoMinistrado.hpp"

class SalaAula;//Forward Declaration

class Disciplina{
	public:
	Disciplina(std::string nome);
		Disciplina(std::string nome, SalaAula* sala);

		~Disciplina();

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int carga);

		Pessoa* getProfessor();
        void setProfessor(Pessoa* prof);

		void setSalaAula(SalaAula* sala);
        SalaAula* getSalaAula();
		void anularSalaAula();

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
        void imprimirConteudosMinistrados();
		std::list<ConteudoMinistrado*>& getConteudos();

		void adicionarAluno(Pessoa* aluno);
		void removerAluno(Pessoa* aluno);
		void removerAluno(unsigned long cpf);
		std::list<Pessoa*>& getAlunos();
	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		SalaAula* sala;

		std::list<ConteudoMinistrado*> conteudos;
		std::list<Pessoa*> alunos;
};
#endif