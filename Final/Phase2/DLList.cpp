#include <iostream>
#include "DLList.h"

using namespace std;

DLList::DLList()
{
    
}

//public method
void DLList::Insert(int data)
{
    if (p_ == NULL)
    {
        p_ = new Node(data);
        p_->next_ = p_;
        p_->previous_ = p_;
    }
    else
    {
        if(p_->next_ == NULL)
        {
            p_->next_ = new Node(data);
            p_->next_->previous_ = p_;
            p_ = p_->next_;
        }
        else
        {
            cout << "While Loop" << endl;
            while (p_->next_ != NULL)
            {
                p_ = p_->next_;
            }
            p_->next_ = new Node(data);
            p_->next_->previous_ = p_;
            p_ = p_->next_;
        }
    }
}

void DLList::print()
{
    
}