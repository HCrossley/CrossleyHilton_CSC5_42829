/* 
 * File:   Lehr's custom Gaddis 8th Ed Ch3 Prob 12
 * Author: Hilton A. Crossley Jr.
 * Created on March 9, 2016, 10:12 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    // local variables
    int f1, f2, c1, c2, fstart;
    float cfinal, c2final;
    
    // Input Variables
    
    cout << "Input the starting degress for the first conversion in F.\n ==>";
    cin  >> fstart;
    cout << "Input the point F1 for the second conversion.\n ==>";
    cin  >> f1;
    cout << "Input point F2 for the second problem.\n ==>";
    cin  >> f2;
    cout << "Input point C1 for the second problem.\n ==>";
    cin  >> c1;
    cout << "Input point C2 for the second problem.\n ==>";
    cin  >> c2;
    
    // calculations
    cfinal = ((fstart - 32.0) * (5.0/9.0));
    
    c2final = (c1 + ((c2 - c1) * ((fstart - f1) / (f2 - f1)) ) );
    
    // output
    
    cout << "The first conversion result is " << cfinal << " degrees cel." << endl;
    cout << "The second conversion result is " << c2final << "degrees cel." << endl;
    return 0;
    
    // I messed up. I'm tired. I will fix this code later today.
    
    // The first method is linar scale. The second is Interpolation. 
}

