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
    
    node_one_.SetData("NODE 1");
    node_two_.SetData("NODE 2");
    node_three_.SetData("NODE 3");
    
    node_one_.SetLeft(&node_two_);
    node_one_.SetRight(&node_three_);
    
    tree tree_one_;
    tree tree_two_(&node_one_);
    
    cout << "Program done." << endl;
    return 0;
}