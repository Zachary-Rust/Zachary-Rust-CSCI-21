#include "tree.h"

tree::tree()
{
    root_ = NULL;
}

tree::tree(node *n)
{
    root_ = n;
}

void tree::SetRoot(node *r)
{
    root_ = r;
}

node* tree::GetRoot()
{
    return root_;
}

bool tree::SameTree(tree other)
{
    //Set pointer to other tree's root
    i_ = other.GetRoot();
    
    string current_tree_ = InOrder(*root_);
    string other_tree_ = InOrder(*i_);
}

string InOrder(node r, string output = "")
{
    string node_data_ = "";
    node_data_ = output + r.GetData();
    
    if (r.GetLeft() != NULL)
    {
        InOrder(*r.GetLeft(), node_data_);
    }
    else if (r.GetRight() != NULL)
    {
        InOrder(*r.GetRight(), node_data_);
    }
    else if (r.GetParent() != NULL)
    {
        InOrder(*r.GetParent(), node_data_);
    }
    else
    {
        return node_data_;
    }
}