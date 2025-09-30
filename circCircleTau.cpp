// Copyright (c) 2025 Abdul All rights reserved.
//
// Created by: Abdul
// Date: 9/29/2025
// Circumference with C++

#include <iostream>

int main() {
    const float TAU = 6.28f;  // Tau ≈ 2π
    float radius;

    // Ask the user for the radius
    std::cout << "Enter the radius of the circle (in cm): ";
    std::cin >> radius;

    // Calculate circumference
    float circumference = TAU * radius;

    // Display the result
    std::cout << "The circumference of the circle is: "
              << circumference << " cm" << std::endl;
}
