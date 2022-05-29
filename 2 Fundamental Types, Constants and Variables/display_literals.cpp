/*
display_literals.cpp

Display hexadecimal integer literals and decimal integer literals
Prinz_2002_ A Complete Guide to Programming in C++

*/

#include <iostream>
using namespace std;
int main() {
  // cout outputs integers as decimal integers
  cout << "Value of 0xFF = " << 0xFF << " decimal"
       << endl; // output is 255 decimal

  // The manipulator hex changes output to hexadecimal
  cout << "Value of 27 = " << hex << 27 << " hexadecimal"
       << endl; // output: 1b hexadecimal
  
//  1b = (16^1)*1 + (16^0)*b = (16^1)*1 + (16^0)*11 = 16+11 = 27
  
 
}

