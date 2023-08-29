// Created by Josh Balch at the University of Alabama

#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
    public:
        int data;
        // the data stored in the node

        Node* child;
        // the child node of the current node

        int priority;
        // the priority of the node
};

#endif