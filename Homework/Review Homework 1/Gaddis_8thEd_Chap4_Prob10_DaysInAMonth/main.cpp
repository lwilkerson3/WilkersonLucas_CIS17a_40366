/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Lucas
 *
 * Created on February 27, 2020, 11:37 PM
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
    int month;
    int days;
    int year;
    bool leapYear;
    
    // Get input
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    
    // Calculations
    if (year % 100 == 0) {
        leapYear = false;
        if (year % 400 == 0) {
            leapYear = true;
        }
    }
    else if (year % 4 == 0) {
        leapYear = true;
    }
    
    if (month == 2) {
        days = 28;
        if (leapYear) {
            days = 29;
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    
    // Output
    cout << days << " days";
    
    return 0;
}

