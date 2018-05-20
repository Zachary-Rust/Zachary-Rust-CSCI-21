/*
    Author: Zachary Rust
    Date: 5/18/2018
    Description: This class stores a string and its associated weight
*/

#ifndef NODE_H
#define NODE_H

#include <string>
using std::string;

class Node {
    private:
    string word_;
    int weight_;
    
    Node *left_;
    Node *right_;
    
    public:
    Node();
    Node(string word, int weight);
    
    void SetWord(string word);
    void SetWeight(int weight);
    
    string GetWord();
    int GetWeight();
    
    void SetRight(Node *node);
    void SetLeft(Node *node);
    
    Node* GetRight();
    Node* GetLeft();
    
    ~Node() {}
};

#endif