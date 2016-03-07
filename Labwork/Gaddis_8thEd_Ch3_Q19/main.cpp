/* 
 * File:   Gaddis_8thEd_Ch3_Prob19
 * Author: Hilton A. Crossley Jr.
 *
 * Created on March 7, 2016, 9:39 AM
 */

// Calculate what the monthly payment is for the following data.

// Loan Amount = $10,000
// Interest Rate = 12% a year
// 36 Monthly Payments

// Afterwards find a way to work backwards and do a loan check to find 
// the original amount of the loan.


// System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here!

int main(int argc, char** argv) {
    // Declare variables
    int loanAmt, numPay;
    float inRyr, lonAmt2, inRmon, monPay, inRate2;
    // Initialize variables
    
    // Input Values
    loanAmt = 10000; numPay = 36;
    inRyr = .12;  inRmon = inRyr / 12; // Interest by months an years.
    
    // Calculate the monthly payment    
    // Use math to make the second variable for rate.
    inRate2 = pow( (1+inRmon) , numPay );
    
    // Static cast it into a float to conserve data
    static_cast<float>(inRate2);
    
    // Find the monthly payment.
    monPay = ( (inRmon * inRate2) /( inRate2 - 1) ) * loanAmt;
    // Output the results
    cout << "Monthly Payment is ==> " << monPay << endl;
    cout << "Interest rate of the loan is ==> " << inRmon << "% per month." << endl;
    
    
    
    // Secondary program. Finding the original loan amount.
    
    // Calculation.
    
    lonAmt2 = monPay / ( (inRmon * inRate2) / (inRate2 - 1) );
    
    cout << "$"<< lonAmt2 << " Was the original loan amount." << endl;
            
    // Make a cat pun.
    cout << "The purrfessor was right, this program is hard to make.";
    // Exit Stage Right!
    return 0;
}