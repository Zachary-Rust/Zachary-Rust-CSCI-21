#include <iostream>
#include "BSTree.h"

using namespace std;

int main()
{
    BSTree tree;
    tree.insert(15);
    tree.insert(5);
    tree.insert(20);
    tree.insert(10);
    tree.insert(30);
    tree.insert(25);
    tree.insert(88);
    tree.print();
    cout << "Program finished." << endl;
    return 0;
}