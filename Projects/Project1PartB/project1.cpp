//Zachary Rust
//2.1.2018
//This program checks what type of card each card is in a database and if it
//doesn't find a match, returns "Unknown Card Type"

#include <iostream>
#include <vector>
#include <fstream>
#include "accountclass.h"

using namespace std;

int main()
{
    //This object loads the input file with the accounts
    ifstream inF1("file1.txt");
    
    //Check that the file opened properly, returns error (1) if not loaded
    if (!inF1.is_open())
    {
        cout << "error loading cards..." << endl;
        return 1;
    }
    
    //Vector used for loading accounts
    vector<account> accounts;
    
    //This string array will hold the card number in the first index, the name
    //in the second, the card type in the third, adn card balance in the fourth
    string data[4];
    
    //Temp strings used for combinging first and last names into one string
    string temp1;
    string temp2;
    
    //Loads all information of file one and puts information into a vecotr
    while (!inF1.eof())
    {
        
        // This loop loads each line of data before sending it to the account
        // object
        for (int i = 0; i < 4; i++)
        {
            if (i == 1)
            {
                inF1 >> temp1;
                inF1 >> temp2;
                data[i] = temp1 + ' ' + temp2;
            }
            else
            {
                inF1 >> data[i];
            }
        }
        
        //Creates an account to be added to the vector of accounts
        account temp_account(data[0], data[1], data[2], data[3]);
        
        //creates an account object for each person
        accounts.push_back(temp_account);
    }
    
    return 0;
}