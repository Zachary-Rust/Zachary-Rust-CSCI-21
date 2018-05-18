#include <iostream>
#include "BSTree.h"

using namespace std;

int main()
{
    BSTree tree;
    tree.Insert(15);
    tree.Insert(5);
    tree.Insert(20);
    tree.Insert(10);
    tree.Insert(30);
    tree.Insert(25);
    tree.Insert(88);
    tree.print();
    cout << "Program finished." << endl;
    return 0;
}