/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Lucas
 *
 * Created on February 28, 2020, 11:34 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    // Declare Variables and Functions
    double fahrenheit;
    double celsius(double fahr);
    
    // Get input
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    // Output
    cout << "The temperature in Celsius is " << celsius(fahrenheit);

    return 0;
}
double celsius(double fahr) {
    return (fahr*5.0/9.0-32.0);
}
