// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program add positive numbers

#include <iostream>

int main() {
    // This is the loop addition function

    int times_added;
    int positive_integer;
    int counter;
    int total = 0;

    // Input, Process and Output
    std::cout << "How many positive numbers would you like to add: ";
    std::cin >> times_added;
    std::cout << "" << std::endl;
    if (times_added == 0) {
        std::cout << "Invalid Input." << std::endl;
    }
    try {
        for (counter = 0; counter < times_added; counter++) {
            std::cout << "Enter a positive integer to add: ";
            std::cin >> positive_integer;
            std::cout << "" << std::endl;
            if (positive_integer < 0) {
                continue;
            } else if (positive_integer > 0) {
                total = total + positive_integer;
            } else if (positive_integer == 0) {
                std::cout << "Invalid Input." << std::endl;
                break;
            }
        }
        if (positive_integer > 0 || positive_integer < 0) {
            std::cout << "Sum of all positive integers is " << total
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
