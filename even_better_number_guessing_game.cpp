// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program creates an even better number guessing game

#include <iostream>
#include <random>
#include <string>


int main() {
    // this function creates the game

    int numberGuessed;
    int someRandomNumber;
    std::string userInput;



    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0 , 9]
    someRandomNumber = idist(rgen);


    // input
    std::cout << "Enter the number between 0 - 9 : ";
    std::cin >> userInput;

    // process
    try {
        numberGuessed = std::stoi(userInput);
        if (numberGuessed == someRandomNumber) {
            std::cout << "You guessed the number!";
        } else {
            std::cout << "Incorrect, the number was " <<
                someRandomNumber << ".";
        }
    } catch (std::invalid_argument) {
        std::cout << userInput << " is not an integer.";
    }

    // output
    std::cout << std::endl;
    std::cout << "Thanks for playing." << std::ends;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
