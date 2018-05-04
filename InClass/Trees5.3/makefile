run: node.o tree.o main.o
	g++ node.o tree.o main.o -o run
	
node: node.cpp
	g++ -g -c node.cpp
	
tree: tree.cpp
	g++ -g -c tree.cpp
	
main: main.cpp
	g++ -g -c main.cpp
	
clear:
	rm * .o run