#include <iostream>
#include <string>
#include <sstream>
#include "card.h"

using namespace std;

//Constructor
creditcard::creditcard()
{
    card_string = "0000";
    bin = 0000;
}

//Sets variable information
//INPUT: card number as string num
//OUTPUT: n/a
void creditcard::SetCard(string num)
{
    card_string = num;
    
    //Now we should automatically check the bin
    CheckBin();
}

//This function takes a credit card number and checks the bin
//INPUT: n/a
//OUTPUT: none. Will send either true or false to check function, with company name.
void creditcard::CheckBin()
{
    string company = "";
    bool check = false;
    //Looping variable
    int i = 0;
    
    //StringStream
    int temp = 0;
    stringstream ss;
    
    //Starts checking bin from small to high numbers
    
    //VISA CHECK
    if (card_string.at(0) == '4')
    {
        company = "Visa";
        check = true;
        bin = card_string.at(0);
    }
    
    //AMERICAN EXPRESS CHECK
    //Extract first two digits
    for (i = 0; i < 2; i++)
    {
        ss << card_string.at(i);
    }
    
    //convert bin from string to int
    ss >> temp;
    
    if(temp == 34 || temp == 37)
    {
        company = "American Express";
        check = true;
        bin = temp;
    }
    
    //MASTERCARD CHECK
    //First two digits already extracted
    if (temp >= 51 && temp <= 55){
        company = "Mastercard";
        check = true;
        bin = temp;
    }
    
    //DISCOVER
    //Fist two digits already extracted
    if (temp == 65)
    {
        company = "Discover";
        check = true;
        bin = temp;
    }
    
    //Check first 3 digits through stringstream
    for (i = 0; i < 3; i++)
    {
        ss << card_string.at(i);
    }
    //Convert from string to int
    ss >> temp;
    
    //Check
    if (temp >= 644 && temp <= 649)
    {
        company = "Discover";
        check = true;
        bin = temp;
    }
    
    //Check first 4 digits through stringstream
    for (i = 0; i < 4; i++)
    {
        ss << card_string.at(i);
    }
    ss >> temp;
    
    //Check
    if (temp == 6011)
    {
        company = "Discover";
        check = true;
        bin = temp;
    }
    
    //Check first 6 digits
    for (i = 0; i < 6; i++)
    {
        ss << card_string.at(i);
    }
    ss >> temp;
    
    if (temp >= 622126 && temp <= 622925)
    {
        company = "Discover";
        check = true;
        bin = temp;
    }
    
    cout << company << endl << endl;
    //Now check the Luhn Algorithm
    cout << "..............." << check << endl;
    CheckAlg(check, company);
}

string creditcard::CheckAlg(bool p, string n)
{
    //If the card didn't pass the bin check, "Unknown Card Type" is returned
    if (p == false)
    {
        return "Unknown Card Type";
    }
    
    //First we determine the length of the card number
    int length = card_string.length();
    if (length < 13 || length > 16)
    {
        return n;
    }
    
    for (int i = 0; i < card_string.length(); i++)
    {
        cout << card_string.at(i) << ',' ;
        i++;
    }
    cout << endl << endl;
    
    return "FAILED";
}