#include "accountclass.h"

class platinum: public account {
    protected:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    platinum();
    
    bool Transaction();
};