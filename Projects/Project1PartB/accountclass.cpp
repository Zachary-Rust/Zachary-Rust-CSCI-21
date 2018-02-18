#include "accountclass.h"

//Default Constructor
account:: account()
{
    name_ = "blank";
    card_num_ = "empty";
    card_type_ = "empty";
    current_balance_ = 0;
}

//Overload Constructor to fill all variables
account::account(string card_num, string name, string card_type, string balance)
{
    name_ = name;
    card_num_ = card_num;
    card_type_ = card_type;
    stringstream ss;
    ss << balance;
    double temp = 0;
    ss >> temp;
    current_balance_ = temp;
}

//Sets account holder's name
//Input: A string holding the account holders name
//Ouptut: n/a
void account::SetName(string name)
{
    name_ = name;
}

//Gets the account holder's name
//Input: n/a
//Output: account holders name as string
string account::GetName()
{
    return name_;
}

//Sets account holder's card number
//Input: A string holding the card number
//Output: n/a
void account::SetCardNum(string card_num)
{
    card_num_ = card_num;
}

//Returns the account holder's card number
//Input: n/a
//Output: returns card number as string
string account::GetCardNum()
{
    return card_num_;
}

//Sets the account holder's card type
//Input: String holding the card type
//Output: n/a
void account::SetCardType(string card_type)
{
    card_type_ = card_type;
}

//Returns the account holder's card type
//Input: n/a
//Output: returns a string holding the card type
string account::GetCardType()
{
    return card_type_;
}

//Sets the account holder's current balance
//Input: a double containing the balance
//Output:n/a
void account::SetCurrentBalance(double balance)
{
    current_balance_ = balance;
}

//returns the account holder's current balance
//Input: n/a
//Output: a double containing the current balance
double account::GetCurrentBalance()
{
    return current_balance_;
}

void account::AddTransaction(string trans_num, string vendor, double amount)
{
    trans_num_[num_transactions_] = trans_num;
    vendor_[num_transactions_] = vendor;
    amount_[num_transactions_] = amount;
    num_transactions_++;
}
//REMOVE BEFORE TURNING IN
//REMOVE BEFORE TURNING IN
//REMOVE BEFORE TURNING IN
void account::Print()
{
    cout << name_ << ", " << card_type_ << ", " << card_num_ << ", current balance - " << current_balance_ << endl;
    
    for (int i = 0; i < 40; i++)
    {
        cout << " - ";
    }
    cout << endl;
}