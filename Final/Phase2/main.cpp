#include <iostream>
#include "DLList.h"
using std::cout;
using std::endl;

int main()
{
    DLList list;
    
    list.Insert(1);
    list.Insert(2);
    list.Insert(3);
    cout << "Program finished" << endl;
    return 0;
}