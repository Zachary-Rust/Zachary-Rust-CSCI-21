/*
Zachary Rust
2/13/18
Account Class that is used with accounts file
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class account{
    protected:
    //Account Information
    string name_;
    string card_num_;
    string card_type_;
    double current_balance_;
    
    //Transactions
    string date_;
    vector <string> trans_num_;
    vector <string> vendor_;
    vector <double> amount_;
    int num_transactions_;
    
    public:
    account();
    account(string card_num, string name, string card_type, string balance);
    
    void SetName(string name);
    string GetName();
    
    void SetCardNum(string card_num);
    string GetCardNum();
    
    void SetCardType(string card_type);
    string GetCardType();
    
    void SetCurrentBalance(double balance);
    double GetCurrentBalance();
    
    void AddTransaction(string trans_num, string vendor, double amount);
    string GetTrans(int index);
    
    void Print();
    
    virtual ~account(){}
};
  
