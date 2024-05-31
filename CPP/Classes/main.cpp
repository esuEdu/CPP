//
//  main.cpp
//  Classes
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Getter for length
    double getLength() {
        return length;
    }

    // Setter for length
    void setLength(double l) {
        length = l;
    }

    // Getter for width
    double getWidth() {
        return width;
    }

    // Setter for width
    void setWidth(double w) {
        width = w;
    }

    // Function to calculate the area of the rectangle
    double area() {
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect1(10.0, 5.0);

    // Accessing member functions
    std::cout << "Length: " << rect1.getLength() << std::endl;
    std::cout << "Width: " << rect1.getWidth() << std::endl;
    std::cout << "Area: " << rect1.area() << std::endl;
    std::cout << "Perimeter: " << rect1.perimeter() << std::endl;

    // Modify the rectangle's dimensions
    rect1.setLength(20.0);
    rect1.setWidth(10.0);

    std::cout << "\nAfter modifying dimensions:" << std::endl;
    std::cout << "Length: " << rect1.getLength() << std::endl;
    std::cout << "Width: " << rect1.getWidth() << std::endl;
    std::cout << "Area: " << rect1.area() << std::endl;
    std::cout << "Perimeter: " << rect1.perimeter() << std::endl;

    return 0;
}

