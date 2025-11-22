// Created by: Shem
// Created on: 11/22/2025
// This program generates a random RGB colour when the user types "GO"
// Copyright 2025 Shem
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
        // Generate three random numbers between 0 and 255 for RGB
        int colour_1 = std::rand() % 256;
    int colour_2 = std::rand() % 256;
    int colour_3 = std::rand() % 256;
    std::string input;
    while (true) {
        std::cout << "Type GO to generate a random colour: ";
        std::getline(std::cin, input);
        // Check if input is "GO", "Go", or "go"
        if (input == "GO" || input == "Go" || input == "go") {
            std::cout << "R: " << colour_1 << std::endl;
            std::cout << "G: " << colour_2 << std::endl;
            std::cout << "B: " << colour_3 << std::endl;
            std::cout << "Thank you for playing\n";
            std::cout << " /\\_/\\ \n";
            std::cout << "( ^_^ )\n";
            std::cout << " > ^ < \n";
            break;  // Stop the loop
        } else {
            std::cout << "You have to type in the GO to get a colour\n";
        }
    }
}
