#include <iostream>
#include "BSTree.h"

using namespace std;

BSTree::BSTree()
{
    root_ = NULL;
}

//public method
void BSTree::Insert(int data)
{
    root_ = insert(root_, data);
}

//private method
BSTree::Node *BSTree::insert(BSTree::Node *node, int data)
{
    if (node == NULL)
    {
        node = new Node(data);
    }
    else
    {
        if (data <= node->value_)
        {
            node->left_ = insert(node->left_, data);
        }
        else
        {
            node->right_ = insert(node->right_, data);
        }
    }
    
    return node;
}

void BSTree::print()
{
    print(root_);
}

void BSTree::print(BSTree::Node *node)
{
    if (node == NULL)
    {
        return;
    }
    print(node->left_);
    cout << node->value_ << endl;
    print(node->right_);
}

void BSTree::deleteTree(BSTree::Node *node)
{
    if (node == NULL)
    {
        return;
    }
    deleteTree(node->left_);
    deleteTree(node->right_);
    delete node;
}