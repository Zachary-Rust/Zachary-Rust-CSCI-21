#ifndef GOLD_H
#define GOLD_H

#include "accountclass.h"

class gold: public account {
    protected:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    gold();
    gold(string card_num, string name, string card_type, string balance);
    
    void AddTransaction(string date, string trans_num, string vendor, double amount);
};

#endif