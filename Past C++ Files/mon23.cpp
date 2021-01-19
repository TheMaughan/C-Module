/***********************************************************************
* Program:
*    Assignment 23, Loop Syntax
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program computes all the multiples of a number within a specifyed
*    range that is ditermined by the user then computes the sum of all the
*    multiples under 100. For example this program can
*    compute the sum of all the multiples of 5 that are less than 100 which
*    is 950.
*
*    Estimated:  0.5 hrs
*    Actual:     0.0 hrs
*      
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * GET NUMBER
 * This function prompts and recieves input from the user.
 **********************************************************************/
int getNumber()
{
   // prompts for input
   cout << "What multiples are we adding? ";
   int number = 0;
   cin >> number;
   
   // return number
   return number;
}

/**********************************************************************
* GET multiple
* Computes all multiples of a number under 100.
***********************************************************************/
int computMultiple(int number)
{

   // gets all the multiples under 100
   int sum;
   for (int count = 1; (number * count) < 100 ; count++)
   {
      sum += number * count;
   }

   // this variable corrects a bug where the sum is off by the number 
   //       that the user inputed.
   int correct = sum - number;

   // returns the sum
   return correct;
}

/**********************************************************************
* DISPLAY
* Displays to the user the multiple of all multiples under 100.
***********************************************************************/
void display(int number, int correct)
{
   // displays the answer
   cout << "The sum of multiples of "
        << number
        << " less than 100 are: "
        << correct
        << endl;
}

/**********************************************************************
 * MAIN
 * This function calls the other functions
 ***********************************************************************/
int main()
{
   int number = getNumber();
   int correct = computMultiple(number);
   
   display(number, correct);

   return 0;
}
