#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    employee zach;
    zach.SetID();
    cout << zach.GetID() << endl;
}