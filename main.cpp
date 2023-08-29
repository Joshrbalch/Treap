#include <iostream>
#include <string>
#include "Treap.h"

using namespace std;

int main() {
    Treap treap;
    
    for(int i = 0; i < 100; i++) {
        treap.insert(rand() % 10);
    }

    treap.pop(1);

    treap.print();

    return 0;

}