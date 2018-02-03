#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string card = "378282246310005";
    
    for (int i = 0; i < card.length(); i++)
    {
        cout << card.at(i) << ' ';
        i++;
    }
    
}