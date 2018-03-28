run: node.o test2.o
	g++ node.o test2.o -o run
	
node: node.cpp
	g++ -g -c node.cpp
	
test2: test2.cpp
	g++ -g -c test2.cpp
	
clear:
	rm * .o run