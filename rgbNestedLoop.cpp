// Created by: Shem
// Created on: 11/22/2025
// This program generates a random RGB colour when the user types "GO"
// Copyright 2025 Shem
#include <iostream>

int main() {
    for (int r = 0; r < 255; r++) {
        for (int g = 0; g < 255; g++) {
            for (int b = 0; b < 255; b++) {
                // Print RGB color using ANSI escape codes
                std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m"
                          << "RGB (" << r << ", " << g << ", " << b << ")"
                          << "\033[0m" << std::endl;
            }
        }
    }

    std::cout << "\nDone printing all RGB colours." << std::endl;
}
