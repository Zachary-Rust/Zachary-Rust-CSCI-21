#include <iostream>
#include <string>

using namespace std;

template <typename Type>
Type Swap (Type &x, Type &y)
{
    Type temp;
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
}

int main()
{
    int a,b;
    a = 5;
    b = 10;
    cout << "Running" << endl;
    cout << a << ',' << b << endl;
    Swap(a,  b);
    cout << a << ',' << b << endl;
    cout << "Complete" << endl;
}