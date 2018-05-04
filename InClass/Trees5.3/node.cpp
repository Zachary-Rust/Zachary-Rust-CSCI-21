#include "node.h"

node::node()
{
    parent_ = NULL;
    left_ = NULL;
    right_ = NULL;
    data_ = "";
}

// node::node(node *n)
// {
//     left_ = n;
//     data_ = "";
// }


// node::node(node *n, string d)
// {
//     next_ = n;
//     data_ = d;
// }

void node::SetParent(node *n)
{
    parent_ = n;
}

node* node::GetParent()
{
    return parent_;
}

void node::SetLeft(node *n)
{
    left_ = n;
}

node* node::GetLeft()
{
    return left_;
}

void node::SetRight(node *n)
{
    right_ = n;
}

node* node::GetRight()
{
    return right_;
}

void node::SetData(string d)
{
    data_ = d;
}

string node::GetData()
{
    return data_;
}