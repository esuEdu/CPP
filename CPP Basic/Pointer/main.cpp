//
//  main.cpp
//  Pointer
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

int main() {
    int var = 42;       // Declare an integer variable
    int *ptr = &var;    // Declare a pointer variable and assign it the address of var

    std::cout << "Value of var: " << var << std::endl;        // Output the value of var
    std::cout << "Address of var: " << &var << std::endl;     // Output the address of var
    std::cout << "Value of ptr: " << ptr << std::endl;        // Output the address stored in ptr (should be same as address of var)
    std::cout << "Value at address stored in ptr: " << *ptr << std::endl; // Output the value stored at the address stored in ptr (should be same as var)

    return 0;
}

