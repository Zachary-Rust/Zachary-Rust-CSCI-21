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
    string company = "Unknown Card Type";
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
    
    ss.clear();
    
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
    
    ss.clear();
    
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
    
    ss.clear();
    
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
    
    cout << company << endl;
    cout << "------------------------" << endl;
    //Now check the Luhn Algorithm
    CheckAlg(check, company);
}

string creditcard::CheckAlg(bool p, string n)
{
    //Set up string stream for function
    stringstream ss;
    string temp;
    
    //If the card didn't pass the bin check, "Unknown Card Type" is returned
    if (p == false)
    {
        return n;
    }
    
    //First we determine the length of the card number and check that the lenght
    //of the number is allowed
    int length = card_string.length();
    if (length < 13 || length > 16)
    {
        return n;
    }
    
    //Use this to get every other number going backwards starting second to last
    //This array holds the doubled numbers, and the index is used in the for loop
    //since the variable i is incrementing twice
    int doubled_nums[8];
    int index = 0;
    
    for (int i = card_string.length() - 2; i >= 0; i = i-2)
    {
        cout << card_string.at(i) << ' ';
        ss << card_string.at(i);
        ss >> doubled_nums[index];
        ss.clear();
        index++;
    }
    cout << endl << endl;
    
    //This loop will double the numbers, then determine if they are one, or two
    //characters, then add them to the variable "total"
    int total = 0;
    int temp_int = 0;
    ss.clear();
    
    for (int i = 0; i < card_string.length()/2; i++)
        {
        doubled_nums[i] = doubled_nums[i] * 2;
        ss << doubled_nums[i];
        ss >> temp;
        
        if (temp.length() == 1)
        {
            total += doubled_nums[i];
            ss.clear();
        }
        else
        {
            ss.clear();
            ss << temp.at(0);
            //cout << "| " << temp.at(0) << "| ";
            ss >> temp_int;
            total += temp_int;
            ss.clear();
            ss << temp.at(1);
            //cout << "| " << temp.at(1) << "| ";
            ss >> temp_int;
            total += temp_int;
            ss.clear();
        }
        cout << doubled_nums[i] << ' ';
    }
    cout << endl << "TOTAL........" << total << endl;
    
    //Now we get 'x', or the last digit we add to the number
    temp_int = total * 9;
    cout << "TIMES 9........" << temp_int << endl;
    
    //now we get the last number of our temporary int
    ss << temp_int;
    ss >> temp;
    ss.clear();
    ss << temp.at(temp.length()-1);
    ss >> temp_int;
    cout << "THIRD CHAR AFTER * 9........" << temp_int << endl;
    total += temp_int;
    
    //now check if the number == 0 after mod 10
    if (total%10 == 0)
    {
        cout << "FIIIINNNNNAAAAALLLLYYYYYYYY!!!!!!!!!!!" << endl;
    }
    else
    {
        cout << "Card failed..." << endl;
    }
    cout << endl << "______________________________" << endl << endl;
    return "FAILED";
}