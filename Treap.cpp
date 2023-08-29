#include <iostream>
#include <string>
#include "Node.h"
#include "Treap.h"

using namespace std;


Treap::Treap() {
    root = nullptr;
}

void Treap::insert(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->priority = rand();
    newNode->child = nullptr;

    if (root == nullptr) {
        root = newNode;
    } 
    
    else {
        Node* temp = root;
        while (temp->child != nullptr) {
            temp = temp->child;
        }
        
        temp->child = newNode;
    }
}

Node* Treap::search(int data) {
    Node* temp = root;
    while (temp != nullptr) {
        if (temp->data == data) {
            return temp;
        }
        temp = temp->child;
    }
    return nullptr;
}

Node* Treap::pop(int data) {
    Node* temp = root;
    Node* prev = nullptr;
    while (temp != nullptr) {
        if (temp->data == data) {
            if (prev == nullptr) {
                root = temp->child;
            } else {
                prev->child = temp->child;
            }
            return temp;
        }
        prev = temp;
        temp = temp->child;
    }
    return nullptr;
}

void Treap::print() {
    Node* temp = root;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->child;
    }
    cout << endl;
}
