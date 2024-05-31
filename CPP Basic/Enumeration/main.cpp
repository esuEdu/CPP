//
//  main.cpp
//  Enumeration
//
//  Created by Eduardo on 31/05/24.
//

#include <iostream>

enum class TrafficLight {
    Red,
    Yellow,
    Green
};

int main() {
    TrafficLight light = TrafficLight::Green;
    if (light == TrafficLight::Green) {
        std::cout << "The traffic light is green." << std::endl;
    }
    return 0;
}

