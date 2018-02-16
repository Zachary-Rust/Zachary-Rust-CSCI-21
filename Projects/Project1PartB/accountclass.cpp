#include "accountclass.h"

account::account()
{
    name_ = "blank";
    card_num_ = "empty";
    card_type_ = "empty";
    current_balance_ = 0;
}

account::account(string card_num, string name, string card_type, string balance)
{
    name_ = name;
    card_num_ = card_num;
    card_type_ = card_type;
    stringstream ss;
    ss << balance;
    int temp = 0;
    ss >> temp;
    current_balance_ = temp;
}

void account::SetName(string name)
{
    name_ = name;
}

string account::GetName()
{
    return name_;
}

void account::SetCardNum(string card_num)
{
    card_num_ = card_num;
}

string account::GetCardNum()
{
    return card_num_;
}

void account::SetCardType(string card_type)
{
    card_type_ = card_type;
}

string account::GetCardType()
{
    return card_type_;
}

void account::SetCurrentBalance(int balance)
{
    current_balance_ = balance;
}

int account::GetCurrentBalance()
{
    return current_balance_;
}

void account::Print()
{
    cout << name_ << ", " << card_type_ << ", " << card_num_ << ", current balance - " << current_balance_ << endl;
}

//account::~account(){
//}
