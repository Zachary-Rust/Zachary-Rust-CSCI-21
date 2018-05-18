#include "Queue.h"
#include <iostream>
using std::ostream;
using std::endl;

int main()
{
    Queue<int> queue;
    queue.push(10);
    queue.push(11);
    // queue.push(12);
    
    for (int i = 0; i < 3; i++)
    {
        cout << i << ". " << queue.front() << endl;
        //queue.pop();
    }
    
    cout << "program done." << endl;
    return 0;
}