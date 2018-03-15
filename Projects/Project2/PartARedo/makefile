run: main.o gameboard.o player.o human.o
	g++ main.o gameboard.o player.o human.o -o run
	
main: main.cpp
	g++ -g -c main.cpp
	
gameboard: gameboard.cpp
	g++ -g -c gameboard.cpp
	
player: player.cpp
	g++ -g -c player.cpp
	
human: human.cpp
	g++ -g -c human.cpp
	
clean:
	rm * .o run