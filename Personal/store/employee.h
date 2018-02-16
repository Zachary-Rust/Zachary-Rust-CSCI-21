/*
Zachary Rust
02/13/2018
V 0.01
*/

#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

class employee 
{
    private:
    string name_;
    double wage_;
    short id_num_;
    
    public:
    employee();
    employee(string name);
    
    void SetWage(double wage);
    double GetWage();
    
    void SetID();
    short GetID();
};