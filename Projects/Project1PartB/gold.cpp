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

bool gold::Transaction()
{
    if (current_balance_ + amount_[num_transactions_] < limit_)
    {
        current_balance_ += amount_[num_transactions_];
        return true;
    }
    else
    {
        return false;
    }
}