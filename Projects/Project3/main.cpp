#include "tree.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    Tree tree;
    tree.LoadWords("cities.txt");
    
    string pre = "";
    
    cout << "Enter the beginning of a word.. ";
    cin >> pre;
    
    pre.at(0) = toupper(pre.at(0));
    
    cout << "Result: " << endl << tree.AutoComplete(pre) << endl;
    
    tree.Clear();
    
    return 0;
}