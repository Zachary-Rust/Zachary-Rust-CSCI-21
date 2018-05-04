
#ifndef NODE_H
#define NODE_H

#include <string>
using std::string;

class node {
    private:
    node *parent_;
    node *left_;
    node *right_;
    string data_;
    
    public:
    node();
    // node(node *n);
    // node(node *n, string d);
    
    void SetParent(node *n);
    node* GetParent();
    
    void SetLeft(node *n);
    node* GetLeft();
    
    void SetRight(node *n);
    node* GetRight();
    
    void SetData(string d);
    string GetData();
    
    ~node() {}
};

#endif