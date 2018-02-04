#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

//Gets User String
//Output: User String
string GetInput();

//Calls all check functions
//Input: string to be checked
//Output: What type of string it is
string Check(string s);

//Checks if string is numeric
//Input: string to be checked
//Output: true if check passes
bool IsNumbers(string s);

//Checks if string is alphabetical
//Input: string to be checked
//Output: true if check passes
bool IsLetters(string s);

//Checks if string is alphanumeric
//Input: string to be checked
//Output: true if check passes
bool IsBoth(string s);