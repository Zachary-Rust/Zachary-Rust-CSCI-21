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

void account::AddTransaction(string date, string trans_num, string vendor, double amount)
{
    gold Gold;
    platinum Platinum;
    corporate Corporate;
    if (card_type_ == "Gold")
    {
        if (Gold.Transaction() == false)
        {
            cout << "# Transaction failed # Amount exceeded allowed limt & overdraft." << endl;
        }
        else
        {
            date_.push_back(date);
            trans_num_.push_back(trans_num);
            vendor_.push_back(vendor);
            amount_.push_back(amount);
            num_transactions_++;
            cout << "___ New Transaction -- " << name_ << " --___" << endl;
        }
    }
    
    if (card_type_ == "Platinum")
    {
        if (Platinum.Transaction() == false)
        {
            cout << "# Transaction failed # Amount exceeded allowed limt & overdraft." << endl;
        }
        else
        {
            date_.push_back(date);
            trans_num_.push_back(trans_num);
            vendor_.push_back(vendor);
            amount_.push_back(amount);
            num_transactions_++;
            cout << "___ New Transaction -- " << name_ << " --___" << endl;
        }
    }
    
    if (card_type_ == "Corporate")
    {
        if (Corporate.Transaction() == false)
        {
            cout << "# Transaction failed # Amount exceeded allowed limt & overdraft." << endl;
        }
        else
        {
            date_.push_back(date);
            trans_num_.push_back(trans_num);
            vendor_.push_back(vendor);
            amount_.push_back(amount);
            num_transactions_++;
            cout << "___ New Transaction -- " << name_ << " --___" << endl;
        }
    }
}

void account::Print()
{
    cout << name_ << ", " << card_type_ << ", " << card_num_ << ", current balance - " << current_balance_ << endl;
    
    for (int i = 0; i < num_transactions_; i++)
    {
        cout << "Transaction - " << trans_num_[i] << endl;
        cout << date_[i] << ": " << vendor_[i] << "     $" << amount_[i] << endl;
    }
    cout << endl;
}