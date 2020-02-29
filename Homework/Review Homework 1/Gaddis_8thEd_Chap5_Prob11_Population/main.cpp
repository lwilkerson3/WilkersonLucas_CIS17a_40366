/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Lucas
 *
 * Created on February 28, 2020, 11:03 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    
    // Declare variables
    float population = -1;
    float totalDays = -1;
    float percentage = -1;
    
    // Get input
    while (population < 2) {
        cout << "Please enter a number greater than or equal to two for the starting population: ";
        cin >> population;
    }
    while (totalDays < 1) {
        cout << "Please enter a number greater than or equal to one for the number of days to simulate: ";
        cin >> totalDays;
    }
    while (percentage < 0) {
        cout << "Please enter a positive number for the percent increase of the population: ";
        cin >> percentage;
    }
    
    // Output
    for (int i = 0; i < totalDays + 1; i++) {
        cout << "Day " << i << ": " << (int)population << endl;
        population += (population / 100) * percentage;
    }

    return 0;
}

