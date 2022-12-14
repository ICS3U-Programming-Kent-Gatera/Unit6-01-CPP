// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Kent
// Created on: Dec 2022
// This program uses an array to calculate the average.

#include <iostream>
#include <random>
#include <string>
using namespace std;

int main() {
    // Declaring all the variables and constants.
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    int arrayOfInt[MAX_ARRAY_SIZE];
    string arrayOfStr[MAX_ARRAY_SIZE];
    int someRandomNumber;
    float sumNum;
    float ansNum;

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        // Generating the random number.
        random_device rseed;
        mt19937 rgen(rseed());
        uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);
        someRandomNumber = idist(rgen);

        // Adding the random number to the list.
        arrayOfInt[i] = someRandomNumber;
        // Adding up all the numbers for division later.
        sumNum += arrayOfInt[i];
    }
    // Dividing up all the numbers by the total/max numbers in the array.
    ansNum = sumNum / MAX_ARRAY_SIZE;
    cout << "The average of [";
    for (int i = 0; i < MAX_ARRAY_SIZE - 1; i++) {
        cout << arrayOfInt[i] << ", ";
    }
    // 9 is the final number in the index since the array is 10 elements.
    cout << arrayOfInt[9] << "] is " << ansNum << "\n";
}
