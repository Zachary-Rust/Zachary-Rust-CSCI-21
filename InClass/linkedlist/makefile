run: node.o test1.o
	g++ node.o test1.o -o run
	
node: node.cpp
	g++ -g -c node.cpp
	
test1: test1.cpp
	g++ -g -c test1.cpp
	
clear:
	rm * .o run