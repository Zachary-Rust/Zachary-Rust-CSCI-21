run: main.o gameboard.o player.o human.o computer.o
	g++ main.o gameboard.o player.o human.o computer.o -o run
	
main: main.cpp
	g++ -g -c main.cpp
	
gameboard: gameboard.cpp
	g++ -g -c gameboard.cpp
	
player: player.cpp
	g++ -g -c player.cpp
	
human: human.cpp
	g++ -g -c human.cpp
	
computer: computer.cpp
	g++ -g -c computer.cpp
	
clean:
	rm * .o run