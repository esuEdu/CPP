//
//  main.cpp
//  Structures
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>
#include <string>

// Define a struct named Person
struct Person {
    std::string name;
    int age;
    double height;

    // Member function to display the person's details
    void display() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Height: " << height << " meters\n";
    }
};

int main() {
    // Create an instance of Person
    Person person1;

    // Assign values to the members of person1
    person1.name = "John Doe";
    person1.age = 30;
    person1.height = 1.75;

    // Display the details of person1
    person1.display();

    return 0;
}

