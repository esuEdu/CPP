//
//  main.cpp
//  Pointer
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

int main() {
    int var = 20;    // Declare an integer variable and initialize it
    int *ptr;        // Declare a pointer variable

    ptr = &var;      // Store the address of 'var' in the pointer variable

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value stored in ptr (address of var): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    *ptr = 30;       // Change the value of 'var' using the pointer

    std::cout << "New value of var after changing through ptr: " << var << std::endl;
    
    return 0;
}


