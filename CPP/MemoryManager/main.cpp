//
//  main.cpp
//  MemoryManager
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

int main() {
    // Allocate memory for 5 integers
    int *p = new int[5];

    // Check if allocation succeeded
    if (!p) {
        std::cerr << "Memory allocation failed" << std::endl;
        return 1;
    }

    // Initialize allocated memory
    for (int i = 0; i < 5; ++i) {
        p[i] = i * 10;
    }

    // Access and print allocated memory
    for (int i = 0; i < 5; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory
    delete[] p;
    p = nullptr; // Avoid dangling pointer

    return 0;
}

