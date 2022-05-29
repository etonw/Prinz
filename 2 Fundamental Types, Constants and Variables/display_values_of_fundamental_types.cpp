/*
 display_values_of_fundamental_types.cpp

Prinz_2002_ A Complete Guide to Programming in C++
2 Fundamental Types, Constants and Variables

*/

#include "myheader.h" // made my first header

#include <cfloat>
#include <climits> //definition of INT_MIN
#include <iostream>
using namespace std;

int main() {

  doublespace();
  cout << "Hello. This program prints the Size of and Range of Fundamental Types "
       << endl << endl;
  doublespace();
  cout << "Integral Types" 
    << endl << endl;
  maxMinTable();

  cout << "char \t\t\t\t" 
    << sizeof(char) 
    << "\t\t\t\t" 
    << CHAR_MIN
    << "\t\t\t\t" 
    << CHAR_MAX 
    << endl;

  cout << "unsigned char  \t\t" 
    << sizeof(unsigned char) 
    << "\t\t"
    << "\t\t 0  \t\t\t\t" 
    << CHAR_MAX << endl
    << endl;

  cout << "short\t\t\t\t " 
    << sizeof(short) 
    << "\t\t\t\t" 
    << SHRT_MIN
    << "\t\t\t\t" 
    << SHRT_MAX << endl;

  cout << "unsigned short    \t" 
    << sizeof(unsigned short) 
    << "\t\t\t\t"
    << "\t\t 0 \t\t\t\t" 
    << USHRT_MAX 
    << endl << endl;

  cout << "int   \t\t\t\t " 
    << sizeof(int) 
    << "\t\t\t\t" 
    << INT_MIN
    << "\t\t\t\t" 
    << INT_MAX 
    << endl;

  cout << "unsigned int  \t\t" 
    << sizeof(unsigned int) 
    << "\t\t\t\t"
    << "\t\t 0 \t\t\t\t" 
    << UINT_MAX 
    << endl << endl;

  cout << "long \t\t\t\t" 
    << sizeof(long) 
    << "\t\t\t\t" 
    << LONG_MIN
    << "\t\t" 
    << LONG_MAX 
    << endl;

  cout << "unsigned long\t\t " 
    << sizeof(unsigned long)
    << "\t\t"
    << "\t\t 0 \t\t" 
    << ULONG_MAX 
    << endl << endl;

  doublespace();
  doublespace();
  cout << "Floating-Point Types" 
    << endl << endl;
  maxMinTable();

  cout << "float\t\t\t\t" 
    << sizeof(float) 
    << "\t\t\t\t" 
    << FLT_MIN
    << "\t\t\t\t" 
    << FLT_MAX 
    << endl << endl;

  cout << "double \t\t\t\t" 
    << sizeof(double) 
    << "\t\t\t\t" 
    << DBL_MIN
    << "\t\t\t\t" 
    << DBL_MAX 
    << endl << endl;

  cout << "long double \t\t" 
    << sizeof(long double) 
    << "\t\t"
    << LDBL_MIN 
    << "\t\t" 
    << LDBL_MAX 
    << endl << endl;

 doublespace();
  doublespace();
  cout << "Boolean" 
    << endl << endl;
  maxMinTable();

    cout << "Boolean \t\t\t\t" 
    << sizeof(bool) 
    << "\t\t"
    << "\t\t 0  \t\t"    
    << "\t\t" 
    << BOOL_MAX 
    << endl << endl;
  
  return 0;
}
