#include "node.h"

Node::Node()
{
    word_ = "";
    weight_ = 0;
    left_ = NULL;
    right_ = NULL;
}

Node::Node(string word = "", int weight = 0)
{
    word_ = word;
    weight_ = weight;
    left_ = NULL;
    right_ = NULL;
}

void Node::SetWord(string word)
{
    word_ = word;
}

void Node::SetWeight(int weight)
{
    weight_ = weight;
}

string Node::GetWord()
{
    return word_;
}

int Node::GetWeight()
{
    return weight_;
}

void Node::SetRight(Node *node)
{
    right_ = node;
}

void Node::SetLeft(Node *node)
{
    left_ = node;
}

Node* Node::GetRight()
{
    return right_;
}

Node* Node::GetLeft()
{
    return left_;
}