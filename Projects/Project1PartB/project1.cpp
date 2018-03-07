//Zachary Rust
//2.1.2018
//This program checks what type of card each card is in a database and if it
//doesn't find a match, returns "Unknown Card Type"

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
// #include "accountclass.h"
#include "gold.h"
#include "platinum.h"
#include "corporate.h"

using namespace std;

int main()
{
    //This object loads the input file with the accounts
    ifstream inF1("file1.txt");
    
    //This object loads the transactions
    
    //Check that the file opened properly, returns error (1) if not loaded
    if (!inF1.is_open())
    {
        cout << "error loading cards..." << endl;
        return 1;
    }
    
    //Vector used for loading accounts
    //vector<account> accounts;
    vector<gold> golds;
    vector<platinum> platinums;
    vector<corporate> corporates;
    
    //Variable used as index for printing account summaries
    int num_accounts = 0;
    
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
            
            num_accounts++;
        }
        
        //Creates an account to be added to the vector of accounts
        if (data[2] == "gold")
        {
            gold temp_gold(data[0], data[1], data[2], data[3]);
            golds.push_back(temp_gold);
        }
        else if (data[2] == "platinum")
        {
            platinum temp_platinum(data[0], data[1], data[2], data[3]);
            platinums.push_back(temp_platinum);
        }
        else if (data[2] == "corporate")
        {
            corporate temp_corporate(data[0], data[1], data[2], data[3]);
            corporates.push_back(temp_corporate);
        }
        
        //account temp_account(data[0], data[1], data[2], data[3]);
        
        //creates an account object for each person
        accounts.push_back(temp_account);
    }
    
    //Close the file object to be reused for transactions
    inF1.close();
    
    //Now we load the transactions and run them through each account
    ifstream inF2;
    inF2.open("file2.txt");
    
    if (!inF2.is_open())
    {
        cout << "error loading transactions..." << endl;
        return 1;
    }
    
    //This string array will temporarily hold the data from each line of the
    //transaction file
    string transaction_data[5];
    
    //Variable used as index
    int index = 0;
    
    //Loops through transaction file getting all transactions
    while (!inF2.eof())
    {
        //Loads a line
        inF2 >> temp1;
        
        //resets index
        index = 0;
        
        //Each if statement adds every character up to the separation character
        //to the appropriate slot in the transaction data array.  Once the 
        //separation character is hit, it is skipped and it starts adding the 
        //next piece of information to the next index
        for (int i = 0; i < temp1.length(); i++)
        {
            if (index == 0)
            {
                if (temp1.at(i) != ':')
                {
                    transaction_data[index] += temp1.at(i);
                }
                else
                {
                    i++;
                    index++;
                }
            }
            
            if (index == 1)
            {
                if (temp1.at(i) != ':')
                {
                    transaction_data[index] += temp1.at(i);
                }
                else
                {
                    i++;
                    index++;
                }
            }
            
            if (index == 2)
            {
                if (temp1.at(i) != ':')
                {
                    transaction_data[index] += temp1.at(i);
                }
                else
                {
                    i++;
                    index++;
                }
            }
            
            if (index == 3)
            {
                if (temp1.at(i) != ':')
                {
                    transaction_data[index] += temp1.at(i);
                }
                else
                {
                    i++;
                    index++;
                }
            }
            
            if (index == 4)
            {
                if (temp1.at(i) != ':')
                {
                    transaction_data[index] += temp1.at(i);
                }
                else
                {
                    i++;
                }
            }
        }
        
        //Convert the string cost to a double to pass it to the add transaction
        //function
        stringstream ss;
        
        double cost;
        
        ss << transaction_data[4];
        ss >> cost;
        
        //Now store the data in the appropriate account by looping through all
        //accounts until the matching account is found
        for (int i = 0; i < golds.size(); i++)
        {
            if (transaction_data[0] == golds[i].GetCardNum())
            {
                golds[i].AddTransaction(transaction_data[1], transaction_data[2], transaction_data[3], cost);
            }
        }
        
        
        //resets the array for the next line
        for (int i = 0; i < 5; i++)
        {
            cout << transaction_data[i] << endl;
            transaction_data[i] = "";
        }
        cout << endl << endl;
    }
    
    //Finally Print out all account summaries
    // for (int i = 0; i < num_accounts; i++)
    // {
    //     accounts[i].Print();
    // }
    
    return 0;
}