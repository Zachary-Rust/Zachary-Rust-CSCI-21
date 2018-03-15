#ifndef PLATINUM_H
#define PLATINUM_H

#include "accountclass.h"

class platinum: public account {
    protected:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    platinum();
    platinum(string card_num, string name, string card_type, string balance);
    
    bool Transaction();
};

#endif