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
        node = new node(data);
    }
    else
    {
        if (node->m_data <= data)
        {
            insert(node->m_left(data));
        }
        else
        {
            insert(node->m_right(data));
        }
    }
    
    return node;
}

void BSTree::print()
{
    
}

void BSTree::print(BSTree::Node *node)
{
    
}

void BSTree::deleteTree(BSTree::Node *node)
{
    
}