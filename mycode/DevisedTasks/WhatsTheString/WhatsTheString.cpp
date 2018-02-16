/*
 * Name        : WhatsTheString
 * Author      : Zachary Rust
 * Description : Gets a string and determines if it is numeric, just words, or
                 both.  If it is none it returns "String Invalid".
 */
#include "WhatsTheString.h"

int main()
{
    string user_string = GetInput();
    cout << Check(user_string) << endl;
}

string GetInput()
{
    string temp;
    cout << "Please type a sentence. I will tell you if it numeric, alphabetical, or alphanumeric." << endl;
    cin >> temp;
    return temp;
}

string Check(string s)
{
    if (IsLetters(s) == true)
    {
        return "String is alphabetical.";
    }
    else if (IsNumbers(s) == true)
    {
        return "String is numerical.";
    }
    else if (IsBoth(s) == true)
    {
        return "String is alphanumeric.";
    }
    else
    {
        return "String Invalid";
    }
}

bool IsLetters(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ( !isalpha(s.at(i)))
        {
            return false;
        }
    }
    return true;
}

bool IsNumbers(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ( !isdigit(s.at(i)))
        {
            return false;
        }
    }
    return true;
}

bool IsBoth(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ( !isdigit(s.at(i)) && !isalpha(s.at(i)))
        {
            return false;
        }
    }
    return true;
}