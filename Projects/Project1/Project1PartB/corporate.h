#ifndef CORPORATE_h
#define CORPORATE_h

#include "accountclass.h"

class corporate: public account {
    protected:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    corporate();
    corporate(string card_num, string name, string card_type, string balance);
    
    bool Transaction();
};

#endif