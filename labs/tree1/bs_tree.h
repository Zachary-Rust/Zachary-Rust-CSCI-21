
#ifndef TREE_H
#define TREE_H

#include "bst_node.h"
#include <string>
using std::string;

class tree {
    private:
    BSTNode *root_;
    BSTNode *i_;
    
    public:
    tree();
    tree(BSTNode *n);
    
    void SetRoot(BSTNode *r);
    BSTNode* GetRoot();
    
    string InOrder(BSTNode r);
    
    bool SameTree(tree other);
};

#endif