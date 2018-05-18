#include <iostream>
#include "BSTree.h"

using namespace std;

BSTree::BSTree()
{
    m_root = NULL;
}

//public method
void BSTree::insert(int data)
{
    m_root = insert(m_root, data);
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
        if (data <= node->m_value)
        {
            node->m_left = insert(node->m_left, data);
        }
        else
        {
            node->m_right = insert(node->m_right, data);
        }
    }
    
    return node;
}

void BSTree::print()
{
    print(m_root);
}

void BSTree::print(BSTree::Node *node)
{
    if (node == NULL)
    {
        return;
    }
    print(node->m_left);
    cout << node->m_value << endl;
    print(node->m_right);
}

void BSTree::deleteTree(BSTree::Node *node)
{
    if (node == NULL)
    {
        return;
    }
    deleteTree(node->m_left);
    deleteTree(node->m_right);
    delete node;
}