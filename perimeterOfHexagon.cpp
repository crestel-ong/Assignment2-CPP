// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This programs calculates the perimeter of a hexagon
//    user inputs the length of one side

#include <iostream>

int main() {
    // main function calculates the perimeter of a hexagon
    const int NUMBER_OF_SIDES = 6;
    int perimeter;
    int length_of_side;

    // Input
    std::cout << "We will calculate the perimeter of a hexagon. " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the length of one side of the hexagon (cm): ";
    std::cin >> length_of_side;

    // Process
    perimeter = NUMBER_OF_SIDES * length_of_side;

    // Output
    std::cout << "The perimeter is " << (perimeter) << " cm. " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done. " << std::endl;
}
