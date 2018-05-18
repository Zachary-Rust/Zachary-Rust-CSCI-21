#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

template <typename Type>
Type Test(Type one, Type two)
{
    if (one < two)
    {
        return one;
    }
    else
    {
        return two;
    }
}

int main()
{
    cout << Test(1,2) << endl;
    cout << Test(1,0) << endl;
    cout << Test('c', 'f') << endl;
}