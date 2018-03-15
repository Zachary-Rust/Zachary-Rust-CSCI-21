//Zachary Rust
//2.1.2018
//This header file is for a class that takes in credit card numbers
//and checks which company they apply to
#include <string>

using namespace std;

class creditcard {
    private:
    string card_string;
    unsigned int bin;
    
    public:
    creditcard();
    void SetCard(string num);
    void CheckBin();
    string CheckAlg(bool p, string n);
};