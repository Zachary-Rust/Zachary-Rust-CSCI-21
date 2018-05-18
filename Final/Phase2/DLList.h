#ifndef BSTREE_H
#define BSTREE_H

class BSTree {
    private:
    
    class Node {
        public:
        Node(int value) {value_ = value; }
        Node *previous_ = NULL;
        Node *next_ = NULL;
        int value_;
    };
    
    Node *cur_ = NULL;
    void print(Node *node);
    
    public:
    BSTree();
    ~BSTree() {}
    
    void Insert(int data);
    void print();
};

#endif