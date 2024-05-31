//
//  main.cpp
//  Functions
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

// Function declarations
int maxOfThree(int a, int b, int c);
void swap(int &a, int &b);

int main() {
    // Example for maxOfThree function
    int x = 10, y = 15, z = 5;
    int max = maxOfThree(x, y, z);
    std::cout << "The maximum of " << x << ", " << y << ", and " << z << " is: " << max << std::endl;

    // Example for swap function
    int a = 10, b = 20;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}

// Function definitions
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

