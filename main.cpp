#include <iostream>
#include <string>
#include "Treap.h"

using namespace std;

int main() {
    Treap treap;
    
    for(int i = 0; i < 100; i++) {
        treap.insert(i);
    }

    treap.print();

    return 0;

}