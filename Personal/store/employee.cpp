#include "employee.h"

//Constructor that sets blank information
employee::employee()
{
    name_ = "blank";
    wage_ = 11.00;
    id_num_ = 0000;
}

//constructor if name is given
employee::employee(string name)
{
    name_ = name;
    wage_ = 11.00;
    id_num_ = 0000;
}

//Sets an employees hourly wage
void employee::SetWage(double wage)
{
    wage_ = wage;
}

//Gets an employees hourly wage
double employee::GetWage()
{
    return wage_;
}

//Randomly generates an ID for employee
void employee::SetID()
{
    srand(time(0));
    
    short temp;
    string temp_string;
    
    temp = rand() % 10000 + 1;
    
    stringstream ss;
    ss << temp;
    ss >> temp_string;
    ss.clear();
    
    while (temp_string.length() != 4)
    {
        temp = rand() % 10000 + 1;
    
        ss << temp;
        ss >> temp_string;
        ss.clear();
    }
    
    id_num_ = temp;
}

short employee::GetID()
{
    return id_num_;
}