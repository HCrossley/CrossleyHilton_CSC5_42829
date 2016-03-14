/* 
 * File:   Truth Table
 * Author: Hilton A. Crossley Jr.
 * Created on March 14, 2016, 9:42 AM
 * Purpose: Mess around with the Ternary operand while making a truth table.
 * Sidenote: There is no cat pun in this program. 
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    bool x = true;
    bool y = true;
    int a = 2, b = 3;
    
    
    cout <<"Truth Table"<< endl << endl;
    
    // Table Heading.
    cout <<"x   y   !x   !y   x&&y   x||y   x^y   x^y^y   x^y^x   !(x&&y)   !x||!y   !(x||y)   !x&&!y"<< endl;
    
    // First row of truths
    (x)?cout<<"T   ":cout<<"F   ";
    (y)?cout<<"T    ":cout<<"F    ";
    (!x)?cout<<"T    ":cout<<"F    ";
    (!y)?cout<<"T     ":cout<<"F     ";
    (x&&y)?cout<<"T      ":cout<<"F      ";
    (x||y)?cout<<"T     ":cout<<"F     ";
    (x^y)?cout<<"T      ":cout<<"F      ";
    (x^y^y)?cout<<"T       ":cout<<"F       ";
    (x^y^x)?cout<<"T        ":cout<<"F        ";
    (!(x&&y))?cout<<"T         ":cout<<"F         ";
    (!x||!y)?cout<<"T        ":cout<<"F        ";
    (!(x||y))?cout<<"T        ":cout<<"F        ";
    (!x&&!y)?cout<<"T   ":cout<<"F   "<< endl;
    
    // New conditions.
    y = false;
    // Second row of truths
    (x)?cout<<"T   ":cout<<"F   ";
    (y)?cout<<"T    ":cout<<"F    ";
    (!x)?cout<<"T    ":cout<<"F    ";
    (!y)?cout<<"T     ":cout<<"F     ";
    (x&&y)?cout<<"T      ":cout<<"F      ";
    (x||y)?cout<<"T     ":cout<<"F     ";
    (x^y)?cout<<"T      ":cout<<"F      ";
    (x^y^y)?cout<<"T       ":cout<<"F       ";
    (x^y^x)?cout<<"T        ":cout<<"F        ";
    (!(x&&y))?cout<<"T         ":cout<<"F         ";
    (!x||!y)?cout<<"T        ":cout<<"F        ";
    (!(x||y))?cout<<"T        ":cout<<"F        ";
    (!x&&!y)?cout<<"T   ":cout<<"F   "<< endl;
    
    // New conditions.
    x = false;
    y = true;
    // Third row of truths
    (x)?cout<<"T   ":cout<<"F   ";
    (y)?cout<<"T    ":cout<<"F    ";
    (!x)?cout<<"T    ":cout<<"F    ";
    (!y)?cout<<"T     ":cout<<"F     ";
    (x&&y)?cout<<"T      ":cout<<"F      ";
    (x||y)?cout<<"T     ":cout<<"F     ";
    (x^y)?cout<<"T      ":cout<<"F      ";
    (x^y^y)?cout<<"T       ":cout<<"F       ";
    (x^y^x)?cout<<"T        ":cout<<"F        ";
    (!(x&&y))?cout<<"T         ":cout<<"F         ";
    (!x||!y)?cout<<"T        ":cout<<"F        ";
    (!(x||y))?cout<<"T        ":cout<<"F        ";
    (!x&&!y)?cout<<"T   ":cout<<"F   "<< endl;
    
    // New conditions.
    y = false;
    // Fourth row of truths
    (x)?cout<<"T   ":cout<<"F   ";
    (y)?cout<<"T    ":cout<<"F    ";
    (!x)?cout<<"T    ":cout<<"F    ";
    (!y)?cout<<"T     ":cout<<"F     ";
    (x&&y)?cout<<"T      ":cout<<"F      ";
    (x||y)?cout<<"T     ":cout<<"F     ";
    (x^y)?cout<<"T      ":cout<<"F      ";
    (x^y^y)?cout<<"T       ":cout<<"F       ";
    (x^y^x)?cout<<"T        ":cout<<"F        ";
    (!(x&&y))?cout<<"T         ":cout<<"F         ";
    (!x||!y)?cout<<"T        ":cout<<"F        ";
    (!(x||y))?cout<<"T        ":cout<<"F        ";
    (!x&&!y)?cout<<"T   ":cout<<"F   "<< endl;
    
    cout << endl << endl;
    // Second code. Swaping numbers using logic.
    
    cout <<"Our first number, " <<a<< " is going to be switched with our second number, "<<b<<"."<< endl;
    // Logic switch.
    a = a^b;
    b = a^b;
    a = a^b;
    
    cout <<"Thanks to some logic the first number, "<<a<<" is now the second number, "<<b<<"."<< endl;
           
    
    return 0;
}

