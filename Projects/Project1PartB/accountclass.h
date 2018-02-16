/*
Zachary Rust
2/13/18
Account Class that is used with accounts file
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class account{
    private:
    string name_;
    string card_num_;
    string card_type_;
    int current_balance_;
    
    public:
    account();
    account(string card_num, string name, string card_type, string balance);
    
    void SetName(string name);
    string GetName();
    
    void SetCardNum(string card_num);
    string GetCardNum();
    
    void SetCardType(string card_type);
    string GetCardType();
    
    void SetCurrentBalance(int balance);
    int GetCurrentBalance();
    
    void Print();
    
   // ~virtual account();
};