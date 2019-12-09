// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Dec 2019
// This program uses an array as a parameter

#include <time.h>
#include <iostream>
#include <array>


template<size_t N>
int LowestValue(std::array<int, N> listOfNumbers) {
    // this functions add up all the numbers in the list

    int lowest = listOfNumbers[0];

    for (int aSingleNumber : listOfNumbers) {
        if (aSingleNumber < lowest) {
            lowest = aSingleNumber;
        }
    }
    return lowest;
}


main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int lowest = 0;

    srand(time(NULL));

        std::cout << "The numbers are: ";
        for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
            aSingleRandomNumber = (rand() % 10) + 1;
            randomNumbers[loop_counter] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << " " << std::endl;

        lowest = LowestValue(randomNumbers);

        std::cout << "The lowest number is: " << lowest << std::endl;
}
