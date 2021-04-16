#include <iostream>
using namespace std;
#include "Keypad.h" 
// return an integer value entered by user
int Keypad::getInput() const
{
int input; // variable to store the input
cin >> input; // assumed that user enters an integer
return input; // return the value entered by user
} 
