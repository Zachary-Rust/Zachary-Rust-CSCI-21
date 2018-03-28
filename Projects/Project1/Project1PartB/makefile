runexe: project1.o accountclass.o gold.o platinum.o corporate.o
	g++ -std=c++11 project1.o accountclass.o gold.o platinum.o corporate.o -o runexe
	
project1: project1.cpp
	g++ -std=c++11 -g -c main.cpp
	
accountclass: accountclass.cpp
	g++ -std=c++11 -g -c accountclass.cpp
	
gold: gold.cpp
	g++ -std=c++11 -g -c gold.cpp gold.h
	
platinum: platinum.cpp
	g++ -std=c++11 -g -c platinum.cpp platinum.h
	
corporate: corporate.cpp
	g++ -std=c++11 -g -c corporate.cpp corporate.h

clean:
	rm *.o runexe