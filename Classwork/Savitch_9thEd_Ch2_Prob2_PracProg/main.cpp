/* 
 * File:   Savitch_9thEd_Ch2_Prob2_PracProg
 * Author: Hilton A. Crossley Jr.
 * Created on March 9, 2016, 8:10 AM
 * Purpose: Process the Babolonian Algorithum
 */



// Outline
// We make an input. "N"
// We want to output the square root of that input. sqrt("N")
// We make a guess equal to "N" / 2 we call "R"
// We make another guess equal to (guess+r)/2
// We repeat over and over for a desired accuracy


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
    float usrNum, tempNum, r;

    // Initialize variables
   
    // Input Values
    
    // Input the number to sqrt.
    cout << "What number would you like to find the square root?\n==> ";
    
    cin >> usrNum;
    
    // Map the inputs to outputs

    // Calculations
    
    tempNum = usrNum / 2;
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "First approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    
    
    // Second approximation
    
       // Calculations
    
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "Second approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    
     // Third approximation
    
       // Calculations
    
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "Third approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    
     // Fourth approximation
    
       // Calculations
    
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "Fourth approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    
     // Fifth approximation
    
       // Calculations
    
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "Fifth approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    
     // Sixth approximation
    
       // Calculations
    
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "Sixth approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    
     // Seventh approximation
    
       // Calculations
    
    r = usrNum / tempNum;
    tempNum = (tempNum + r) / 2;
    
    // Output the results
    cout << "Seventh approximation of the square root of " << usrNum << " = " << 
            tempNum << " while r is equal to " << r << endl;
    // Make a cat pun.
    cout << "Meow we're talking!" << endl;
    // Exit Stage Right!
    return 0;
}