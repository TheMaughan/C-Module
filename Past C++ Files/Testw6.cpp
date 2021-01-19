/***********************************************************************
* Program:
*    Assignment 00
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Adds two numbers.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      I wanted to be clever and have a loop promtp the user for a number
*    ended up with a simpler version, loop was redundent.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


 /**********************************************************************
 * GET NUMBER
 * Prompts user for a number.
 ***********************************************************************/
float getNumber()
{
   float number;
   float number2;

   /*for (int numberPrompt = 0; numberPrompt < 2; numberPrompt++)
   {
   	
   if (numberPrompt < 1)
      {*/
      cout << "Enter your first number: ";
      cin >> number;
   
      /*}
   else*/
     	cout << "Enter your second number: ";
      cin >> number2;
   /*}*/
   
   float sum = number + number2;
   
	  return sum;
}


/**********************************************************************
 * DISPLAY ANSWER
 * Displays the answer.
 ***********************************************************************/
 void displayAnswer(float sum)
{
   cout << "The sum of both inputs is: " << sum << endl;
}


/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{
   float sum = getNumber();
   displayAnswer(sum);

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   return 0;
}
