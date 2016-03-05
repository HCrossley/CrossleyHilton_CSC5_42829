/* 
 * File:   main.cpp
 * Author: Hilton A. Crossley Jr
 * Created on March 4, 2016, 8:29 PM
 * Purpose: To create a giant C with a user given letter.
 * Side-note: This is very tiring. I feel like there's a better way.
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
    char usrChar;
    // Initialize variables

    // Input Values
    cout << "Please enter a character. A single character on the keyboard.\n==> ";
    
    cin  >> usrChar;
    // Map the inputs to outputs

    // Output the results
    
    cout <<    "**************" << endl <<
               "       "<< usrChar << " " << usrChar << " " << usrChar
            << endl << "      " << usrChar << "    " << usrChar << endl
            << "     " << usrChar << endl << "     " << usrChar << endl
            << "     " << usrChar << endl << "     " << usrChar << endl 
            << "     " << usrChar << endl << "      "<< usrChar
            << "    " << usrChar << endl << "       " << usrChar
            << " " << usrChar << " " << usrChar << endl
            << "**************" << endl;
            

    // Make a cat pun.
    cout << "Let me tell you, this project was clawful to make." << endl;
    // Exit Stage Right!
    return 0;
}