#include "bst_node.h"

BSTNode::BSTNode()
{
    parent_ = NULL;
    left_ = NULL;
    right_ = NULL;
    data_ = 0;
}

// BSTNode::BSTNode(BSTNode *n)
// {
//     left_ = n;
//     data_ = 0;
// }


// BSTNode::BSTNode(BSTNode *n, string d)
// {
//     next_ = n;
//     data_ = d;
// }

void BSTNode::SetParent(BSTNode *n)
{
    parent_ = n;
}

BSTNode* BSTNode::GetParent()
{
    return parent_;
}

void BSTNode::SetLeft(BSTNode *n)
{
    left_ = n;
}

BSTNode* BSTNode::GetLeft()
{
    return left_;
}

void BSTNode::SetRight(BSTNode *n)
{
    right_ = n;
}

BSTNode* BSTNode::GetRight()
{
    return right_;
}

void BSTNode::SetData(int d)
{
    data_ = d;
}

int BSTNode::contents()
{
    return data_;
}