//
//  main.cpp
//  SmartMemoryManager
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>
#include <memory>

int main() {
    // Create a unique_ptr to manage the array of 5 integers
    std::unique_ptr<int[]> p(new int[5]);

    // Initialize allocated memory
    for (int i = 0; i < 5; ++i) {
        p[i] = i * 10;
    }

    // Access and print allocated memory
    for (int i = 0; i < 5; ++i) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;

    // No need to manually delete memory, unique_ptr will handle it

    return 0;
}

