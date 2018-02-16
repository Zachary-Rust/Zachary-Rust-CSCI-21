/*
 * Name        : Item.h
 * Author      : Zachary Rust
 * Description : Class Header File
 */

#ifndef LAB_H
#define LAB_H

include "Item.cpp"
#include <string>
#include <sstream>

using namespace std;
class Item{
    private:
    string name_;
    unsigned int value_;
    
    public:
    Item();
    Item(string n, unsigned int v);
    virtual ~Item();
    
    void SetName(string n);
    string GetName();
    
    void SetValue(unsigned int v);
    unsigned int GetValue();
    
    string ToString();
}

#endif