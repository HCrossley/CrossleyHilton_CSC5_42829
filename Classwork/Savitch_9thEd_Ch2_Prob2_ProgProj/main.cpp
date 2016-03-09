/* 
 * File:   Union Salary Calculator
 * Author: Hilton A. Crossley Jr
 * Purpose: Finding the amount of money owed to the Union
 * Created on March 9, 2016, 9:06 AM
 */

// System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
// User Libraries

// Global Constants
int MONTHS = 12;
// Execution begins.
int main(int argc, char** argv) {
    
    // Local Variables
    int curSal, backPay; // Current Salary, Months of back pay owed.
    
    float percInc, nASal, oMSal, nMSal, convBP, bPayOwd; // Percentage Increase,
    // New Annual Salary, Old Monthly Salary, New Monthly Salary,
    // Back pay number used for conversion, Back Pay owed to employees.
    
    
    // Variable Inputs
    
    // User input their current salary.
    cout << "Hello. Enter the amount of your current Annual Salary. No commas needed.\n==> ";
        cin >> curSal;
        
    // User input the percentage amount their salary is being increased by.    
    cout << "Now input the percentage amount your salary will be increased by.\n==>";
        cin >> percInc;
        
    // User input the amount of months owed.
    cout << "Thank you. Now enter the amount of months back pay you are owed.\n==>";
        cin >> backPay;
    
    // Calculations 
        
        percInc /= 100; // Making percentage increase into a percentage amount.
        
        convBP = backPay / MONTHS; // Conversion for later use.
        
        oMSal = curSal / MONTHS; // Conversion for old monthly salary.
        
        nASal = curSal * (1 + percInc); // Finding the new Annual Salary
        
        nMSal = nASal / MONTHS; // Converting new Annual to Monthly Salary
        
        bPayOwd = ((nASal - curSal) / convBP); // Finding back pay owed.
        
    // Output results
    
        cout << "You now make an annual salary of $" << nASal << " seeing $" 
             << nMSal << " every month." << endl;
        cout << "The company owes you $"<< bPayOwd << " for the " << backPay 
             << " months that you were on the old salary." << endl;
    
    
    return 0;
}

