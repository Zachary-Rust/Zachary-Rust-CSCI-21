r: mytest.o node.o stack.o
	g++ mytest.o node.o stack.o -o r
	
mytest: mytest.cpp
	g++ -g -c mytest.cpp

node: node.cpp
	g++ -g -c node.cpp
	
stack: stack.cpp
	g++ -g -c stack.cpp
	
clear:
	rm * .o r