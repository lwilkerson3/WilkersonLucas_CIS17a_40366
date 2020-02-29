/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Lucas
 *
 * Created on February 27, 2020, 10:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    
    // Declare variables
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = 0.74;
    float dollarAmount;
    
    // Get input
    cout << "Enter the dollar amount: $";
    cin >> dollarAmount;
    
    // Display output
    cout << "That is equivalent to " << setprecision(2) << fixed << (dollarAmount * YEN_PER_DOLLAR) << " Yen\n";
    cout << "and it is equivalent to " << setprecision(2) << fixed << (dollarAmount * EUROS_PER_DOLLAR) << " Euros";
    
    return 0;
}

