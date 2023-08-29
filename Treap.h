// Created by Josh Balch at the University of Alabama

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
    // insert a node with the given data into the treap with a randomly assigned priority value

    Node* search(int data);
    // search for a node with the given data in the treap

    Node* pop(int data);
    // search for a node with the given data in the treap and remove it from the treap
    
    void print();
    // print the treap in a readable format
};

#endif