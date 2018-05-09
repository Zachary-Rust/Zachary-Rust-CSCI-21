#include "node.h"
#include "tree.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
    node node_one_;
    node node_two_;
    node node_three_;
    
    node_one_.SetData(0);
    node_two_.SetData(1);
    node_three_.SetData(2);
    
    node_one_.SetLeft(&node_two_);
    node_one_.SetRight(&node_three_);
    
    tree tree_one_;
    tree tree_two_(&node_one_);
    
    cout << "Program done." << endl;
    return 0;
}