runexe: main.o temperature.o
	g++ main.o temperature.o -o runexe
	
main: main.cpp
	g++ -g -c main.cpp
	
temperature: temperature.cpp
	g++ -g -c temperature.cpp
	
clear:
	rm * .o runexe