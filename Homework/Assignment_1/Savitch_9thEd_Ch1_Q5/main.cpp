/* 
 * File:   main.cpp
 * Author: Hilton A. Crossley Jr
 * Created on March 4, 2016, 7:06 PM
 * Purpose:
 * Side-note:
 */

// System Libraries
#include <iostream>
using namespace std;

//User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!

int main( ) 
{
    // Declare variables
    int fWidth, fHeight, fPerim;
    
    // Initialize variables

    // Input Values
    cout << "Hello!" << endl;
    cout << "Press return after entering a number.\n";
    cout << "Enter the width in feet of the space you wish to fence\n==> ";
    
    cin >> fWidth;
    
    cout << "Enter the height in feet of the space you wish to fence\n==>";
    
    cin >> fHeight;
    
    // Map the inputs to outputs
    fPerim = (2 * fWidth) + (2 * fHeight); // Find the perimiter
    
    // Output the results
    cout << "If you need to enclose a space that is ";
    cout << fWidth;
    cout << " feet wide\n";
    cout << "by ";
    cout << fHeight;
    cout << " feet long, ";
    cout << "you need to purchase ";
    cout << fPerim;
    cout << " feet of fencing at least.\n";
    
    // Make a cat pun.
    cout << "Purrfect right?" << endl;  // My own insertion. Ignore.
    cout << "Good-bye\n";
    // Exit Stage Right!
    return 0;
}