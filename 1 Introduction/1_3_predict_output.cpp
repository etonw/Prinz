/*
1_3_predict_output.cpp

Prinz_2002_A Complete Guide to Programming in C++
Chapter 1 Exercise  

3. 
What does the C++ program on the opposite page output on screen?


*/


#include <iostream>
using namespace std;

void pause ();      //prototype

int main ()
{
    cout << endl << "Dear reader; "
         << endl << "have a ";
    pause();
    cout << "!" << endl;
    
    return 0;
}
    
void pause ()
{
    cout << "BREAK";
    
}
