#include <iostream>
#include <string>

using namespace std;

string Reverse(string word, string r = "", int i = -1)
{
    if (i == -1)
    {
        i = word.length();
    }
    
    string temp = r;
    temp += word.at(i-1);
    int num = i;
    num--;
    cout << "Temp = " << temp << endl;
    
    if (i != 1)
    {
        Reverse(word, temp, num);
    }
    else
    {
        return temp;
    }
}

int main()
{
    cout << Reverse("Hello") << endl;
    return 0;
}