#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include "card.h"

using namespace std;

int main()
{
    ifstream inFS("cards.txt");
    
    if (!inFS.is_open())
    {
        cout << "error loading cards..." << endl;
        return 1;
    }
    
    
    //string stream object to be used
    stringstream ss;
    
    //This loop goes through the file until it reaches the end
    //storing the credit card numbers. It requires a string 
    //before converting to a number for std::getline.
    string temp;
    
    creditcard card;
    
    while (!inFS.eof())
    {
        getline(inFS, temp);
        ss << temp;
        ss >> temp;
        card.SetCard(temp);
    }
    
    return 0;
}