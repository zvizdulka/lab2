all: nuke

nuke: main.o Battlefield.o Point.o
	g++ -o nuke main.o Battlefield.o Point.o

main.o: main.cpp
	g++ -c main.cpp

Battlefield.o: Battlefield.cpp
	g++ -c Battlefield.cpp
	
Point.o: Point.cpp
	g++ -c Point.cpp
	
clean:
	rm main.o Battlefield.o Point.o nuke

