/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Lucas
 *
 * Created on February 27, 2020, 10:13 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    // Declare Variables
    int celsius;
    
    // Ask for Input
    cout << "Please enter the temperature in Celsius: ";
    cin >> celsius;
    
    // Output
    cout << "The temperature in Fahrenheit is " << (celsius*9/5+32);
    
    
    return 0;
}

