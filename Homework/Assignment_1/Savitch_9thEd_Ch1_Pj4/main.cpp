/* 
 * File:   main.cpp
 * Author: Hilton A. Crossley Jr
 * Created on March 4, 2016, 8:13 PM
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
    int accFtps = 32, usrTime; // Acceleration at feet per sec.
    float freDist;
    
    // Initialize variables

    // Input Values
    
    // Prompt user for time input.
    cout << "Hello. State the amount of time in seconds you would" <<
            " want the object to fall.\n==> ";
    
    cin >> usrTime;

    // Calculate the free fall distance from the drop.    
    freDist = (accFtps * (usrTime * usrTime)) / 2;

    // Output the results
    cout << "The object would fall a total of: " << freDist << " feet in " <<
        usrTime << " seconds. Quite the fall that." << endl;
    // Make a cat pun.
    cout << "A cat would land on its feet even at that distance though." << endl;
    // Exit Stage Right!
    return 0;
}