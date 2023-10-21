parametrosCompilacao=-Wall #-Wshadow
nomeAula=prova

all: $(nomeAula)

$(nomeAula): main.o Retangulo.o Forma.hpp Circulo.o TelaDesenho.o Forma.o
	g++ -o $(nomeAula) main.o Retangulo.o Circulo.o TelaDesenho.o Forma.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Forma.o: Forma.hpp Forma.cpp
	g++ -c Forma.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

Circulo.o: Circulo.hpp Circulo.cpp
	g++ -c Circulo.cpp $(parametrosCompilacao)

TelaDesenho.o: TelaDesenho.hpp TelaDesenho.cpp
	g++ -c TelaDesenho.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
