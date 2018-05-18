#ifndef BSTREE_H
#define BSTREE_H

class BSTree {
    private:
    
    class Node {
        public:
        Node(int value) {value_ = value; }
        Node *left_ = NULL;
        Node *right_ = NULL;
        int value_;
    };
    
    Node *root_ = NULL;
    Node *insert(Node *node, int data);
    void deleteTree(Node *node);
    void print(Node *node);
    
    public:
    BSTree();
    ~BSTree() {}
    
    void Insert(int data);
    void print();
};

#endif