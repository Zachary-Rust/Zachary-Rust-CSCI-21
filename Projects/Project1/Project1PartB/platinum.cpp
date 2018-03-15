#include "platinum.h"

platinum::platinum()
{
    limit_ = 5000;
    rebate_ = 0.02;
    overdraft_ = 1000;
}

platinum::platinum(string card_num, string name, string card_type, string balance)
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

bool platinum::Transaction()
{
    if (current_balance_ + amount_[num_transactions_] < limit_ + overdraft_)
    {
        current_balance_ += amount_[num_transactions_];
        return true;
    }
    else
    {
        return false;
    }
}