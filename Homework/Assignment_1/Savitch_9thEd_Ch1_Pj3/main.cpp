/* 
 * File:   main.cpp
 * Author: Hilton A. Crossley Jr
 * Created on March 4, 2016, 7:55 PM
 * Purpose:
 * Side-note:
 */

// System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

// Global Constants
float PENY = 0.01, NICL = 0.05, DIME = 0.1, QWTR = 0.25, HLFDOL = 0.5, GDOL = 1;
// Function Prototypes

// Execution Begins Here!

int main(int argc, char** argv) {
    // Declare variables
    int usr_P, usr_N, usr_D, usr_Q, usr_H, usr_G;
    float tot_Amt;
    // Initialize variables

    // Input Values
    cout << "Hello! Allow us to count your change for you." << endl <<
            "As each prompt appears, input the amount of coins you have." << endl;
    
    cout << "How many Pennies do you have?\n==> ";
    cin  >> usr_P;
    cout << "How many Nickels do you have?\n==> ";
    cin  >> usr_N;
    cout << "How many Dimes do you have?\n==> ";
    cin  >> usr_D;
    cout << "How many Quarters do you have?\n==> ";
    cin  >> usr_Q;
    cout << "How many Half Dollar pieces do you have?\n==>";
    cin  >> usr_H;
    cout << "How many Golden Dollar pieces do you have?\n==>";
    cin  >> usr_G;
            

    // Calculate them into outputs
    
    tot_Amt = (usr_P * PENY) + (usr_N * NICL) + (usr_D * DIME) + (usr_Q * QWTR)
                + (usr_H * HLFDOL) + (usr_G * GDOL);
    // Output the results
    
    cout << "In total you have " << tot_Amt << " in change." << endl;
    // Make a cat pun.
    
    cout << "Meow we're talkin. Let's go buy some fish!" << endl;

    // Exit Stage Right!
    return 0;
}