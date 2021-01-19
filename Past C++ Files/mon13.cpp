/***********************************************************************
* Program:
*    Assignment 13, Expressions
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Program converts Fahrenheit to Celsius.
*
*    Estimated:  0.5 hrs   
*    Actual:     5.0 hrs
*     
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * function is supposed to convert the input to a different value.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.precision(0);
   // Declare Variables
   float fahrenheit;
     
   // Prompt the user
   cout << "Please enter Fahrenheit degrees: ";
   cin >> fahrenheit;

   // Declare Variables
   float celsius = 5.0 / 9.0 * (fahrenheit - 32);
   
   // Input display
   cout << "Celsius: " << celsius << "\n";

   
   return 0;
}
