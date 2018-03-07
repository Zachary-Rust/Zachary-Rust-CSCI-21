#include "platinum.h"

platinum::platinum()
{
    limit_ = 5000;
    rebate_ = 0.02;
    overdraft_ = 1000;
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