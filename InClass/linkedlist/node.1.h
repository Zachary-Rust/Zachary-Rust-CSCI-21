//Zachary Rust
//3/8/18
//This class is a node
#ifndef NODE_H
#define NODE_H

#include "student.h"

#include <string>
using namespace std;

class Node {
    private:
    string data_;
    Node *next_;
    
    public:
    Node();
    Node(string data);
    
    void set_next_node(Node *next);
    Node* next_node();
    
    void set_contents(string data);
    string contents();
    
    ~Node() {}
};

#endif