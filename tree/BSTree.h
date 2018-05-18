#ifndef BSTREE_H
#define BSTREE_H

class BSTree {
    private:
    class Node {
        public:
        Node(int value) {m_value = value; }
        Node *m_left = NULL;
        Node *m_right = NULL;
        int m_value;
    };
    Node *m_root = NULL;
    Node *insert(Node *node, int data);
    void deleteTree(Node *node);
    void print(Node *node);
    
    public:
    BSTree();
    ~BSTree() {}
    
    void insert(int data);
    void print();
};

#endif