
#ifndef NODE_H
#define NODE_H

#include <cstdlib>
using namespace std;

template <typename T>
class node {
    private:
    node *next_;
    T data_;
    
    public:
    node(T data = "", node *Node = NULL);
    
    void SetNext(node *Node);
    node* GetNext();
    
    void SetData(T d);
    T GetData();
    
    ~node() {}
};

/*
    Constructor
    Input: optional data and next node
    Output: n/a
*/
template<typename T>
node<T>::node(T data, node *Node)
{
    next_ = Node;
    data_ = data;
}

/*
    This function sets the next node
    Input: pointer to next node
    Ouptut: n/a
*/
template <typename T>
void node<T>::SetNext(node *Node)
{
    next_ = Node;
}

/*
    This function returns a pointer to the next node
    Input: n/a
    Output: Pointer pointing to the next node
*/
template <typename T>
node<T>* node<T>::GetNext()
{
    return next_;
}

/*
    Sets data of the node
    Input: data for node to hold
    Output: n/a
*/
template <typename T>
void node<T>::SetData(T d)
{
    data_ = d;
}

/*
    Returns data from the node
    Input: n/a
    Output: data from the node
*/
template <typename T>
T node<T>::GetData()
{
    return data_;
}

#endif