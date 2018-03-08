#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> DecToBin(int num)
{
    vector<int> result(0);
    
    int powers_two[20];
    
    for (int i = 0; i < 20; i++)
    {
        powers_two[i] = pow (2, i);
    }
    
    for (int i = 19; i >= 0; i--)
    {
        if (powers_two[i] <= num)
        {
            result.push_back(1);
            num -= powers_two[i];
        }
        else
        {
            result.push_back(0);
        }
    }
    return result;
}

int main()
{
    vector<int> i;
    
    i = DecToBin(100);
    cout << "Vector size = " << i.size() << endl;
    for (int a = 0; a < i.size(); a++)
    {
        cout << i[a];
    }
}