//
//  main.cpp
//  Variables
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int myNumber = 5; // Integer variable
        float myFloat = 5.99; // Floating point number
        double myDouble = 9.98; // Double precision floating point number
        char myChar = 'A'; // Character
        bool myBoolean = true; // Boolean
        
        // Performing some operations
        int sum = myNumber + 10;
        float floatSum = myFloat + 2.01;
        double doubleProduct = myDouble * 2;
        char nextChar = myChar + 1; // This will give the next character in ASCII
        bool notMyBoolean = !myBoolean;

        // Output the results of the operations
        std::cout << "Integer: " << myNumber << "\n";
        std::cout << "Integer + 10: " << sum << "\n";
        std::cout << "Float: " << myFloat << "\n";
        std::cout << "Float + 2.01: " << floatSum << "\n";
        std::cout << "Double: " << myDouble << "\n";
        std::cout << "Double * 2: " << doubleProduct << "\n";
        std::cout << "Character: " << myChar << "\n";
        std::cout << "Next Character: " << nextChar << "\n";
        std::cout << "Boolean: " << myBoolean << "\n";
        std::cout << "Not Boolean: " << notMyBoolean << "\n";
        
        return 0;
    
}
