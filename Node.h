#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
    public:
        int data;
        Node* child;
        int priority;
};

#endif