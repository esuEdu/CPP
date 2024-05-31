//
//  main.cpp
//  Input
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string fullName;

    // Taking a single word input
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    // Clearing the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Taking a full line input
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << "Nice to meet you, " << fullName << "!" << std::endl;

    return 0;
}

