// Copyright 2025 (c) All rights reserved
// Created by: Gustav I
// Created on: March 24, 2025
// This program checks if the integer is positive
// negative or zero using try catch on C++.

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
std::srand(std::time(0));              // Seed random number generator
int chosen_number = std::rand() % 10;  // Random number between 0 and 9
int number_guess;

std::cout << "Guess a number (0-9): ";

if (!(std::cin >> number_guess)) {
    std::cout << "Invalid input. /n" << std::endl;
    std::cout << "Please enter an integer between 0 and 9." << std::endl;
    return 1;
    }

if (number_guess < 0 || number_guess > 9) {
    std::cout << "Please enter a number between 0 and 9." << std::endl;
    } else if (number_guess == chosen_number) {
    std::cout << "You got the right number!" << std::endl;
    } else {
    std::cout << "You did not get the right number. /n" << std::endl;
    std::cout << "The correct number was: " << chosen_number << std::endl;
    }

    return 0;
}
