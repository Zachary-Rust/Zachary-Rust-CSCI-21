
#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class Queue {
    private:
    node<T> *first_;
    node<T> *last_;
    
    int size_;
    
    public:
    Queue();
    
    bool empty();
    int size();
    T front();
    T back();
    void push(T value);
    void pop();
};

/*
    Constructor
    Input: n/a
    Output: n/a
*/
template <typename T>
Queue<T>::Queue()
{
    first_ = NULL;
    last_ = NULL;
    size_ = 0;
}

/*
    This function returns true if the queue is empty
    Input: n/a
    Output: True if queue is empty, false if it isn't
*/
template <typename T>
bool Queue<T>::empty()
{
    if (first_ == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
    This function returns the size of the queue
    Input: n/a
    Output: Integer representing the size of the queue
*/
template <typename T>
int Queue<T>::size()
{
    // if (first_ == NULL)
    // {
    //     return 0;
    // }
    // else
    // {
    //     //return variable
    //     int temp = 0;
        
    //     //while loop condition
    //     bool done = false;
        
    //     //iterator pointing to the next element
    //     node<T>* p = last_;
        
    //     while (!done)
    //     {
    //         if (p -> GetNext() != NULL)
    //         {
    //             temp++;
    //             p = p -> GetNext();
    //         }
    //         else
    //         {
    //             done = true;
    //         }
    //     }
        
    //     return temp;
    // }
    
    return size_;
}

/*
    This function returns the data of the front node of the queue
    Input: n/a
    Output: The value of the front node
*/
template <typename T>
T Queue<T>::front()
{
    T data = first_ -> GetData();
    return data;
}

/*
    This function returns the data of the last node of the queue
    Input: n/a
    Output: The value of the back node
*/
template <typename T>
T Queue<T>::back()
{
    return last_.GetData();
}

/*
    This function adds a node to the queue
    Input: Node to be added
    Output: n/a
*/
template <typename T>
void Queue<T>::push(T value)
{
    if (empty())
    {
        cout << "Added first node." << endl;
        node<T> *temp = new node<T>;
        temp -> SetData(value);
        first_ = temp;
        last_ = temp;
    }
    // else
    // {
    //     cout << "Added an extra node" << endl;
    //     node<T> *temp = new node<T>;
    //     last_ -> SetNext(&temp);
    //     last_ = &temp;
    // }
    
    size_++;
}

/*
    This function removes the element at the front of the queue
    Input: n/a
    Output: n/a
*/
template <typename T>
void Queue<T>::pop()
{
    node<T> *temp = first_ -> GetNext();
    first_ = temp;
    //delete temp;
    
    size_--;
}

#endif