/*
 * Name        : lab_6.cpp
 * Author      : FILL IN
 * Description : Working with Arrays
 */

#include "lab_6.h"

string PrepareForDisplay(int values[], int size, char separator = ',')
{
    string temp;
    stringstream ss;
    
    for (int i = 0; i < size - 1; i++)
    {
        ss << values[i] << separator;
    }
    ss << values[size - 1];
    ss >> temp;
    
    return temp;
}

bool HasValue (int values[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
    
    return false;
}

int VauleAt(int values[], int size, int index, bool &error)
{
    if (index >= size || index < 0)
    {
        error = true;
        return 0;
    }
    else
    {
        return values[index];
    }
}

int Sum(int values[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += values[i];
    }
    
    return total;
}

bool SwapValues(int valuesp[], int size, int index1, int index2)
{
    if (index1 || index2 > size - 1 || index1 || index2 < 0)
    {
        return false;
    }
    
    int temp = index1;
    index1 = index2;
    index2 = temp;
    return true;
}
