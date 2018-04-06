/*
Zachary Rust
3/19/18
Stack library
*/

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "node.h"
using namespace std;

class Stack {
    private:
    Node node_;
    int size_;
    
    public:
    Stack();
    
    bool empty();
    
    int size();
};


#endif