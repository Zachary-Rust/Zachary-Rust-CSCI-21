/*
Zachary Rust
2.24.18
This is practice for me using virtual functions since I don't get them very well
and obviously need some practice.

DESCRIPTION: I mad a layout of subclasses and base classes and only use print
functions to see how virtual functions work with inheritance.
*/

#include <iostream>
using namespace std;

class base {
    public:
    virtual void print() { cout << "Base Class" << endl; }
};

class subone: public base {
    public:
    virtual void print() { cout << "Dropped to subclass one!" << endl; }
};

class subtwo: public subone {
    public:
    void print() { cout << "Dropped to the final class!!!!!" << endl; }
};

int main()
{
    base b;
    subone one;
    subtwo two;
    
    b.print();
    one.print();
    two.print();
    
    return 0;
}