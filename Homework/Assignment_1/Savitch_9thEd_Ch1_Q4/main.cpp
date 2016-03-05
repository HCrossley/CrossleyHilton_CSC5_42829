/* 
 * File:   main.cpp
 * Author: Hilton A. Crossley Jr
 * Created on March 4, 2016, 7:04 PM
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
    int number_of_pods, peas_per_pod, total_peas;
    
    // Initialize variables

    // Input Values
    cout << "Hello!" << endl;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    
    cin >> peas_per_pod;
    
    // Map the inputs to outputs
    total_peas = number_of_pods + peas_per_pod;
    
    // Output the results
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    // Make a cat pun.
    cout << "Purrfect right?" << endl;  // My own insertion. Ignore.
    cout << "Good-bye\n";
    // Exit Stage Right!
    return 0;
}