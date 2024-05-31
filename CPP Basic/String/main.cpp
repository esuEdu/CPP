//
//  main.cpp
//  String
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>
#include <string>

int main() {
    // Initializing strings
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string str3 = str1 + " " + str2;
    std::cout << "Concatenated string: " << str3 << std::endl;

    // Finding a substring
    std::size_t found = str3.find("World");
    if (found != std::string::npos) {
        std::cout << "'World' found at position: " << found << std::endl;
    } else {
        std::cout << "'World' not found" << std::endl;
    }

    // Modifying a string
    str3.replace(6, 5, "C++");
    std::cout << "Modified string: " << str3 << std::endl;

    return 0;
}

