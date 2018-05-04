
#ifndef TREE_H
#define TREE_H

#include "node.h"
#include <string>
using std::string;

class tree {
    private:
    node *root_;
    node *i_;
    
    public:
    tree();
    tree(node *n);
    
    void SetRoot(node *r);
    node* GetRoot();
    
    string InOrder(node r);
    
    bool SameTree(tree other);
};

#endif