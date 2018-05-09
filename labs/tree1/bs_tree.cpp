#include "bs_tree.h"

tree::tree()
{
    root_ = NULL;
}

tree::tree(BSTNode *n)
{
    root_ = n;
}

void tree::SetRoot(BSTNode *r)
{
    root_ = r;
}

BSTNode* tree::GetRoot()
{
    return root_;
}

// bool tree::SameTree(tree other)
// {
//     //Set pointer to other tree's root
//     i_ = other.GetRoot();
    
//     string current_tree_ = InOrder(*root_);
//     string other_tree_ = InOrder(*i_);
// }

// string InOrder(BSTNode r, string output = "")
// {
//     string BSTNode_data_ = "";
//     BSTNode_data_ = output + r.GetData();
    
//     if (r.GetLeft() != NULL)
//     {
//         InOrder(*r.GetLeft(), BSTNode_data_);
//     }
//     else if (r.GetRight() != NULL)
//     {
//         InOrder(*r.GetRight(), BSTNode_data_);
//     }
//     else if (r.GetParent() != NULL)
//     {
//         InOrder(*r.GetParent(), BSTNode_data_);
//     }
//     else
//     {
//         return BSTNode_data_;
//     }
// }