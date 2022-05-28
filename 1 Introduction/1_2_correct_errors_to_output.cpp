/*
1_2_correct_errors_to_output.cpp

Prinz_2002_A Complete Guide to Programming in C++
Chapter 1 Exercise  

1. 
The following program contains several errors:



// Now you should not forget your glasses //
#include <stream>
int main
{
cout << "If this text",
cout >> " appears on your display, ";
cout << " endl;"
cout << 'you can pat yourself on '
<< " the back!" << endl.
return 0;
)

*/


// Now you should not forget your glasses

#include <iostream>   //include prepropcessor #. we will treat input as a stream 
using namespace std;

int main() 
{
   //first solution that came to mind
  
    cout  << "If this text, appears on your display"
          << endl;
    cout  << "you can pat yourself on the back!"
          << endl;
          
    cout << endl << endl;   // double line space between alternative solutions
  
  
  
    // Alternative solution
          
    cout  << "If this text, appears on your display"    
          << endl
          << "you can pat yourself on the back!"
          << endl;   

    cout << endl << endl;   // double line space between alternative solutions
    
  
    
    // Textbook solution 
          
    cout  << "If this text";   
    cout  << "appears on your display";
    cout  << endl;  
    cout  << "you can pat yourself on ";
    cout  << "the back!";
    cout  << endl;            
    
   return 0;
}
