#ifndef TREAP_H
#define TREAP_H

#include <iostream>
#include <string>
#include "Node.h"

class Treap {
    private:
    Node* root;

    public:
    Treap();
    void insert(int data);
    Node* search(int data);
    Node* pop(int data);
    void print();
};

#endif