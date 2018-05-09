run: bst_node.o bs_tree.o lab_24_unit_test.o
	g++ bst_node.o bs_tree.o lab_24_unit_test.o -o run
	
bst_node: bst_node.cpp
	g++ -g -c bst_node.cpp
	
bs_tree: bs_tree.cpp
	g++ -g -c bs_tree.cpp
	
# main: main.cpp
# 	g++ -g -c main.cpp
	
lab_24_unit_test: lab_24_unit_test.cpp
	g++ -g -c lab_24_unit_test.cpp

clear:
	rm * .o run