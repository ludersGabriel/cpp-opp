parametrosCompilacao=-Wall #-Wshadow
nomeAula=prova

all: $(nomeAula)

$(nomeAula): main.o Rectangle.o Forma.hpp
	g++ -o $(nomeAula) main.o Rectangle.o Forma.hpp $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Rectangle.o: Rectangle.cpp
	g++ -c Rectangle.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
