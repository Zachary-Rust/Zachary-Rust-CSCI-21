/*
    Author: Zachary Rust
    Date: 5/18/2018
    Description: This class is a tree that searches for strings for an autocomplete feature
*/

#ifndef TREE_H
#define TREE_H

#include "node.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
using std::cout;
using std::endl;
using namespace std;

class Tree {
    private:
    Node *root_;
    int size_;
    
    void Insert(Node *node, string word, int weight);
    int WordWeight(Node *node, string key);
    string AutoComplete(Node *node, string prefix, string result);
    void Clear(Node *node);
    
    public:
    Tree() { root_ = NULL; size_ = 0; }
    Tree(Node *node) { root_ = node; size_ = 0; }
    
    bool LoadWords(string file);
    int Size();
    void InOrder(Node *node);
    void Insert(string word, int weight);
    int WordWeight(string key);
    string AutoComplete(string prefix);
    void Clear();
    
    Node* GetRoot();
    
};

#endif