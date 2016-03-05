/* 
 * File:   main.cpp
 * Author: Hilton A. Crossley Jr
 * Created on March 4, 2016, 7:26 PM
 * Purpose:
 * Side-note:
 */

// System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!

int main(int argc, char** argv) {
    // Declare variables
    int var1, var2, sum1, sum2, sum3, prod1;
    float div1, div2;
    // Initialize variables

    // Input Values
    
    // Our first variable.
    cout << "Hello! Please input a whole number. No decimal or zeros please." << endl;
    cout << "Afterwards press the return key.\n==> ";
    cin >> var1;
    
    // Second variable and prompt.
    
    cout << "Now enter the second variable, following the same rules.\n==> ";
    cin >> var2;
    // Map the inputs to outputs

    // Calculations
    
    sum1 = var1 + var2;
    sum2 = var1 - var2;
    sum3 = var2 - var1;
    prod1 = var1* var2;
    div1 = var1 / var2;
    div2 = var2 / var1;
    
    // Output the results
    
    cout << "There are six possible outcomes with basic math." << endl;
    cout << "Addition: " << sum1 << "." << endl;
    cout << "Subtraction with two possibilities: "<<sum2<<", "<<sum3<<"."<<endl;
    cout << "Product: " << prod1 << "." << endl;
    cout << "Division with two possibilities: " <<div1<<", "<<div2<<"."<<endl;

    // Make a cat pun.
    cout << "Ask your purrfessor to double check!" << endl;
    // Exit Stage Right!
    return 0;
}