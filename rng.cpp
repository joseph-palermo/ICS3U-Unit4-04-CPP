// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program checks if the guessed number, imported by an RGN, is correct
// or incorrect

#include <stdlib.h>
#include <ctime>
#include <iostream>

int main() {
    // This function checks if the guessed number, imported by an RGN, is
    // correct or incorrect

    // Random number seed
    unsigned int seed = time(NULL);

    // variables
    int correctNumber = rand_r(&seed) % 10;
    std::string userGuessString;
    int userGuessNumber;

    // Input
    std::cout << "Guess the number between 0 & 9 (integer):" << std::endl;
    std::cin >> userGuessString;
    std::cout << "" << std::endl;

    // Process
    while (true) {
        try {
            userGuessNumber = std::stoi(userGuessString);
            if (userGuessNumber == correctNumber) {
                std::cout << "You correctly guessed the number!" << std::endl;
                break;
            } else {
                std::cout << "Wrong number!" << std::endl;
                std::cout << "The correct number is: " <<
                correctNumber << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Please insert an integer.";
            break;
        }
    }
}
