parametrosCompilacao=-Wall -std=c++17 #-Wshadow
nomeAula=prova2

all: $(nomeAula)

$(nomeAula): main.o Retangulo.o Forma.hpp Circulo.o TelaDesenho.o ValorInvalidoExcecao.o
	g++ -o $(nomeAula) main.o Retangulo.o Circulo.o TelaDesenho.o ValorInvalidoExcecao.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp Forma.hpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

Circulo.o: Circulo.hpp Circulo.cpp Forma.hpp
	g++ -c Circulo.cpp $(parametrosCompilacao)

TelaDesenho.o: TelaDesenho.hpp TelaDesenho.cpp Forma.hpp
	g++ -c TelaDesenho.cpp $(parametrosCompilacao)

ValorInvalidoExcecao.o: ValorInvalidoExcecao.hpp ValorInvalidoExcecao.cpp
	g++ -c ValorInvalidoExcecao.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
