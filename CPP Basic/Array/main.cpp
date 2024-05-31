//
//  main.cpp
//  Array
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

int main() {
    // Initializing an array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Last element: " << numbers[4] << std::endl;

    // Modifying an element
    numbers[2] = 10;
    std::cout << "Modified third element: " << numbers[2] << std::endl;

    // Iterating through the array
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

