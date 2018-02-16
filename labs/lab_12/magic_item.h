/*
 * Name        : magic_item.h
 * Author      : Zachary Rust
 * Description : Class Header File
 */

#ifndef LAB_H
#define LAB_H

include "magic_item.cpp"
#include <string>
#include <sstream>

using namespace std;
class magic_item: public Item{
    private:
    string description_;
    unsigned int mana_required_;
    
    public:
    magic_item();
    magic_item(string name, unsigned int value, string description, unsigned int mana_required);
    virtual ~magic_item();
    
    void SetDescription(string description);
    string GetDescription();
    
    void SetManaRequired(unsigned int mana_required);
    unsigned int GetManaRequired();
    
    string ToString();
}

#endif