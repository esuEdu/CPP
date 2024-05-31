//
//  main.cpp
//  Control Structures
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Example of an if-else statement
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if (number > 0) {
            cout << "The number is positive." << endl;
        } else if (number < 0) {
            cout << "The number is negative." << endl;
        } else {
            cout << "The number is zero." << endl;
        }

        // Example of a switch case
        char grade;
        cout << "Enter your grade (A, B, C, D, or F): ";
        cin >> grade;

        switch (grade) {
            case 'A':
                cout << "Excellent!" << endl;
                break;
            case 'B':
                cout << "Good job!" << endl;
                break;
            case 'C':
                cout << "Well done!" << endl;
                break;
            case 'D':
                cout << "You passed." << endl;
                break;
            case 'F':
                cout << "Better try again." << endl;
                break;
            default:
                cout << "Invalid grade." << endl;
        }

        // Example of a for loop
        cout << "For loop example: printing numbers from 1 to 5" << endl;
        for (int i = 1; i <= 5; i++) {
            cout << i << " ";
        }
        cout << endl;

        // Example of a while loop
        cout << "While loop example: printing numbers from 5 to 1" << endl;
        int j = 5;
        while (j > 0) {
            cout << j << " ";
            j--;
        }
        cout << endl;

        // Example of a do-while loop
        cout << "Do-while loop example: printing numbers from 1 to 5" << endl;
        int k = 1;
        do {
            cout << k << " ";
            k++;
        } while (k <= 5);
        cout << endl;

        return 0;
    
}
