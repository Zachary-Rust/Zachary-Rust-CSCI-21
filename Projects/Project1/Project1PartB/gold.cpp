#include "gold.h"

gold::gold()
{
    limit_ = 3000;
    rebate_ = 0.01;
    overdraft_ = 0;
}

gold::gold(string card_num, string name, string card_type, string balance)
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

void gold::AddTransaction(string date, string trans_num, string vendor, double amount)
{
    if (current_balance_ + amount_[num_transactions_] < limit_)
    {
        current_balance_ += amount_[num_transactions_];
        date_.push_back(date);
        trans_num_.push_back(trans_num);
        vendor_.push_back(vendor);
        amount_.push_back(amount);
        num_transactions_++;
        cout << "___ New Transaction -- " << name_ << " --___" << endl;
    }
    else
    {
        cout << "# Transaction failed # Amount exceeded allowed limt & overdraft." << endl;
    }
}