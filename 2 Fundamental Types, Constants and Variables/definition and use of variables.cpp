/*

definition and use of variables

Prinz
Chp 2
p.30
*/


#include <iostream>
using namespace std;

int gVar1;        //global variables
int gVar2 = 2;    // explicit initialization


int main() 
{
  char ch = 'A';
  char ch2('l');

  cout << "Value of gVar1:  " << gVar1 << endl;
  cout << "Value of gVar2:  " << gVar2 << endl; 
  cout << "Character in ch: " << ch << endl;
  cout << "Character in ch2: " << ch2 << endl;

  int sum, number = 3; // local variables with and without initialization

  sum = number + 5; 

  cout << "Value of sum: \t" << sum << endl; 

  return 0;
}
