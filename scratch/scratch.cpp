#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{
    ifstream inFS;
    
    inFS.open(file.c_str());
    
    if (!inFS.is_open())
    {
        return false;
    }
    
    int word_count = 0;
    
    inFS >> word_count;
    
    int weight = 0;
    string word = "";
    string temp = "";
    
    for (int i = 0; i < word_count; i++)
    {
        //Load whole line
        getline(inFS, word);
        
        //Extract numbers from line, leaving just the city
        bool done = false;
        
        while (!done)
        {
            if (isalnum(word.at(0)))
            {
                temp += word.at(0);
                word.erase(word.begin());
            }
        }
        
        stringstream ss;
        ss << temp;
        ss >> weight;
        ss.clear();
        
        //Add Node to tree
        Insert(word, weight);
        
        //Remove the new line character
        inFS >> word;
}