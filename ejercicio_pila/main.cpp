#include "custom_stack.h"
#include <iostream>

int main() {
    CustomStack pila;

    // Push 1, 2, 3
    pila.push(1);
    pila.push(2);
    pila.push(3);

    // Pop (removes 3)
    pila.pop();

    // Top should be 2
    std::cout << "Top: " << pila.top() << std::endl;

    // Size should be 2
    std::cout << "Size: " << pila.size() << std::endl;

    return 0;
}

