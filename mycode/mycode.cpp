/*
 * Name        : mycode
 * Author      : Zachary Rust
 * Description : This program processes an order from a list of items then
                 prints a recipt.
 * Sources     :
 */
#include <iostream>
#include <fstream>

using namespace std;

//This class is a cart that holds items bought and prints a recipt
class cart {
    private:
    string name[100];
    double price[100];
    int items;
    
    public:
    //Constructor
    cart();
    
    //Called when an item is purchased
    void Add(string n, double p);
    
    //Prints recipt
    void Print();
};

//Class Constructor
cart::cart()
{
    for (int i = 0; i < 100; i++)
    {
        name[i] = "null";
        price[i] = 0;
    }
    items = 0;
}

//Adds item to cart
void cart::Add(string n, double p)
{
    items++;
    name[items - 1] = n;
    price[items - 1] = p;
}

//Prints recipt
void cart::Print()
{
    double total = 0.00;
    cout << "**Grocery Transaction**" << endl;
    cout << "_________________" << endl << endl;
    cout << "Items: " << items << endl;
    for (int i = 0; i < items; i++)
    {
        cout << i + 1 << " --        " << name[i] << "    $" << price[i] << endl;
        total += price[i];
    }
    cout << "Total = $" << total << endl;
}
int main ()
{
    //open file to load store items and prices
    ifstream inFS;
    
    inFS.open("inventory.txt");
    
    //Check file is open
    if (!inFS.is_open())
    {
        cout << "error loading item file..." << endl;
    }
    
    //First item in text file
    int num_items = 690;
    
    inFS >> num_items;
    string names[100];
    double prices[100];
    
    //cycles through each item creating an object for it
    for (int i = 0; i < num_items; i++)
    {
        inFS >> names[i];
        inFS >> prices[i];
    }
    
    //Close File
    inFS.close();
    
    //Create a loop that exits when done with purchase
    bool buy = true;
    int choice = 0;
    
    //cart class
    cart c;
    
    while (buy)
    {
        //Print Options
        for (int i = 0; i < num_items; i++)
        {
            cout << i + 1 << ") " << names[i] << ": $" << prices[i] << endl;
        }
        cout << num_items + 1 << ") Quit" << endl;
        
        //Prompt for input
        cout << "Please select an option." << endl;
        cin >> choice;
        
        if (choice > 0 && choice < num_items + 1)
        {
            c.Add(names[choice - 1],prices[choice - 1]);
        }
        else if (choice == num_items + 1)
        {
            buy = false;
        }
        else
        {
            cout << "Try again." << endl;
        }
    }
    
    c.Print();
    
    return 0;
}