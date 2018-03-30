run: node.o mytest.o
	g++ node.o mytest.o -o run
	
node: node.cpp
	g++ -g -c node.cpp
	
mytest: mytest.cpp
	g++ -g -c mytest.cpp
	
clear:
	rm * .o run