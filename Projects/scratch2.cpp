#include <iostream>
#include <cmath>
using namespace std;


int binToDec(long binary, int i){
    long int decimal = 0, r = 0, b=0;
    if (binary > 0){
        i++;
        decimal = decimal + binary%2*pow(2,i-1) + binToDec(binary/10,i);
        return decimal;
    }
    else{
        decimal = decimal + binary%2*pow(2,i);
        return decimal;
    }
}
int main(){
int i = 0;
i = binToDec(1111, 0);
cout<<i;
}