#include "node.h"

Node::Node()
{
    data_ = "";
    next_ = NULL;
}

Node::Node(string data)
{
    data_ = data;
    next_ = NULL;
}

void Node::set_next_node(Node *next)
{
    next_ = next;
}

Node* Node::next_node()
{
    return next_;
}

void Node::set_contents(string data)
{
    data_ = data;
}

string Node::contents()
{
    return data_;
}