/* 
 * File:   Gaddis_8thEd_Ch3_Prob20
 * Author:  Hilton A Crossley Jr
 * Created on March 7, 2016, 10:48 AM
 */

// System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

// Global Constants
float PI = atan(1.0)*4;
// Function Prototypes

// Execution Begins Here!

int main(int argc, char** argv) {
    // Declare variables
    int numslic;
    float pizDia, pizArea;
    // Initialize variables
    pizArea = 14.125;
    // Input Values
    cout << "Input the Diamater of the pizza.\n==> ";
    cin >> pizDia;
    
    // Calculate 
        
    numslic = ((PI * pow(pizDia, 2) ) / 4) + 1;
    // Output the results
    
            cout << "The amount of slices of pizza are " << numslic << "." << endl;
    // Make a cat pun.
    cout << "The purrfessor was right, this program is hard to make.";
    // Exit Stage Right!
    return 0;
}