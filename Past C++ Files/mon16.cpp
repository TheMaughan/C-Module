/***********************************************************************
* Program:
*    Assignment 16, If Statements
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program determines what tax bracket the user is in.
*
*    Estimated:  0.5 hrs   
*    Actual:     6.0 hrs
*      
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/***********************************************************************
 * COMPUTE TAX
 * Prompts the user for their income.
 * Determines what tax bracket the user is in.
 **********************************************************************/
int computeTax(double income)
{
   //computes the user's bracket
   int tax = 0;
   
   if (income <= 15100)
      tax = 10;
   else if (income <= 61300)
      tax = 15;
   else if (income <= 123700)
      tax = 25;
   else if (income <= 188450)
      tax = 28;
   else if (income <= 336550)
      tax = 33;
   else
      tax = 35;

   return tax;
}

/**********************************************************************
 * MAIN
 * Displays the user's tax bracket on the screen.
 ***********************************************************************/
int main()
{
   // prompt user for income
   cout << "Income: ";
   double income;
   cin >> income;
   
   // returns the user's tax bracket
   int tax = computeTax(income);                 // call computeTax()
   cout << "Your tax bracket is " << tax
        << "%"
        << endl;
   
   return 0;
}
