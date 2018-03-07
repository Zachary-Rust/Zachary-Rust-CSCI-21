#include "corporate.h"

corporate::corporate()
{
    limit_ = 10000;
    rebate_ = 0.05;
    overdraft_ = 5000;
}

bool corporate::Transaction()
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