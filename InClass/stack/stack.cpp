#include "stack.h"

//constructor
Stack::Stack()
{
    size_ = 0;
}

//Check if stack is empty
//Input: n/a
//Output: n/a
bool Stack::empty()
{
    if (size_ == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Stack::size()
{
    return size_;
}