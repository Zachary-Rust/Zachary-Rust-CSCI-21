
#ifndef BSTNode_H
#define BSTNode_H

#include <string>
using std::string;

class BSTNode {
    private:
    BSTNode *parent_;
    BSTNode *left_;
    BSTNode *right_;
    int data_;
    
    public:
    BSTNode();
    // BSTNode(BSTNode *n);
    // BSTNode(BSTNode *n, string d);
    
    void SetParent(BSTNode *n);
    BSTNode* GetParent();
    
    void SetLeft(BSTNode *n);
    BSTNode* GetLeft();
    
    void SetRight(BSTNode *n);
    BSTNode* GetRight();
    
    void SetData(int d);
    int contents();
    
    ~BSTNode() {}
};

#endif