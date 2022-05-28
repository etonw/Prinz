/*
1_1_multiple_line_output.cpp

Prinz_2002_A Complete Guide to Programming in C++
Chapter 1 Exercise  

1. 
Write a C++ program that outputs the following text on screen:
Oh what
a happy day!
Oh yes,
what a happy day!
Use the manipulator endl where appropriate.

*/

#include <iostream>
using namespace std;

int main() {
    cout  << "Oh what" 
          << endl 
          << "a happy day!" 
          << endl 
          << "Oh yes," 
          << endl 
          << "what a happy day!" 
          << endl;
	return 0;
}
