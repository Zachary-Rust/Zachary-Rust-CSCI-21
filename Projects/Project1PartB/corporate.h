#include "accountclass.h"

class corporate: public account {
    protected:
    int limit_;
    double rebate_;
    int overdraft_;
    
    public:
    corporate();
    
    bool Transaction();
};