#ifndef LAB_H
#define LAB_H

//#include "accountclass.h"

class gold: public account {
    protected:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    gold();
    gold(string card_num, string name, string card_type, string balance);
    
    bool Transaction();
    
    void Math();
    
    void Print();
};

#endif