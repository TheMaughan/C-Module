/***********************************************************************
* Program:
*    Assignment 33, Pointers
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program takes looks at two different accounts and determines 
*    who is paying for the date night based on who has more money in 
*    their account.
*
*    Estimated:  0.5 hrs   
*    Actual:     0.5 hrs
*      This was a simple assignment, easy to understand
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * MAIN
 * I was lazy and put everything in one function, this function does it all.
 ***********************************************************************/
int main()
{
   cout.setf(ios::showpoint);
   cout.setf(ios::fixed);
   cout.precision(2);

   // how much money?
   float accountOne;
   cout << "What is Sam's balance? ";
   cin >> accountOne;

   float accountTwo;
   cout << "What is Sue's balance? ";
   cin >> accountTwo;

   float * pAccount;
   
   // who pays?
   if (accountOne > accountTwo)
      pAccount = &accountOne;
   else
      pAccount = &accountTwo;

   // Get the Price
   cout << "Cost of the date:\n";

   float priceDinner;
   cout << "\t" << "Dinner:    ";
   cin >> priceDinner;

   float priceMovie;
   cout << "\t" << "Movie:     ";
   cin >> priceMovie;

   float priceIceCream;
   cout << "\t" << "Ice cream: ";
   cin >> priceIceCream;
   
   *pAccount -= priceDinner;
   *pAccount -= priceMovie;
   *pAccount -= priceIceCream;

   // report
   cout << "Sam's balance: $" << accountOne << endl;
   cout << "Sue's balance: $" << accountTwo << endl;   
   
   return 0;
}
