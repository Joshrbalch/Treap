#include <iostream>
#include <string>

using namespace std;

class Treap {
    private:

    class Node {
        public:
            int data;
            Node* child;
            int priority;
    };

    Node* root;

    public:
    Treap() {
        root = nullptr;
    }

    void insert(int data) {
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

    Node* search(int data) {
        Node* temp = root;
        while (temp != nullptr) {
            if (temp->data == data) {
                return temp;
            }
            temp = temp->child;
        }
        return nullptr;
    }

    Node* pop(int data) {
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

    void print() {
        Node* temp = root;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->child;
        }
        cout << endl;
    }
};