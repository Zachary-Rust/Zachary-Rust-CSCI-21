#include "accountclass.h"

class gold: public account {
    private:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    gold();
    
    void Transaction(int t);
    
    void Math();
    
    void Print();
};