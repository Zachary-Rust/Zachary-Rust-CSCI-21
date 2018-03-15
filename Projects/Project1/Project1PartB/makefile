runexe: project1.o accountclass.o gold.o
	g++ -std=c++11 project1.o accountclass.o gold.o -o runexe
	
project1: project1.cpp
	g++ -std=c++11 -g -c main.cpp
	
accountclass: accountclass.cpp
	g++ -std=c++11 -g -c accountclass.cpp
	
gold: gold.cpp
	g++ -std=c++11 -g -c gold.cpp

clean:
	rm *.o runexe