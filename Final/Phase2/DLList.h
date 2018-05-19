#ifndef DLLIST_H
#define DLLIST_H

class DLList {
    private:
    
    class Node {
        public:
        Node(int value) {value_ = value; }
        Node *front_ = NULL;
        Node *back_ = NULL:
        Node *previous_ = NULL;
        Node *next_ = NULL;
        int value_;
    };
    
    Node *p_ = NULL;
    
    public:
    DLList();
    ~DLList() {}
    
    void Insert(int data);
    void print();
};

#endif