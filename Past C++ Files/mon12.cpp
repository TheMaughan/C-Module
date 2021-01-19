/***********************************************************************
* Program:
*    Assignment 12, Input & Variables
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Asks for an income, displays the income
*
*    Estimated:  0.25 hrs   
*    Actual:     0.25 hrs
*      Please describe briefly what was the most difficult part.
*    Looking at my paycheck...
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * MAIN
 * Asks and displays income
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   float income = 0;
   cout << "\t" << "Your monthly income: ";
   cin >> income;

   cout << "Your income is: $" << setw(9) << right << income << endl;
   return 0;
}
