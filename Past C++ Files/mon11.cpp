/***********************************************************************
* Program:
*    Assignment 11, Output
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Just doing my taxes...
*
*    Estimated:  0.5 hrs   
*    Actual:     0.5 hrs
*      I had a hard time with the spacing and with the "setw()" command.
* I also didn't read the instructions fully before beginning the project,
* which was the reason for my confusion throughout the whole project.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * This program is displaying a budget in a table format.
 ***********************************************************************/
int main()
{
   // configure code to display money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // display the table
   cout << "\tItem           Projected\n";
   cout << "\t=============  ==========\n";
   cout << "\tIncome" << setw(10);
   cout << "$" << setw(9) << 1000.00 << "\n";

   // taxes
   cout << "\tTaxes" << setw(11);
   cout << "$" << setw(9) << 100.00 << "\n";

   // tithing
   cout << "\tTithing" << setw(9);
   cout << "$" << setw(9) << 100.00 << "\n";

   // living
   cout << "\tLiving" << setw(10);
   cout << "$" << setw(9) << 650.00 << "\n";

   // other
   cout << "\tOther" << setw(11);
   cout << "$" << setw(9) << 90.00 << "\n";

   // delta
   cout << "\t=============  ==========\n";
   cout << "\tDelta" << setw(11);
   cout << "$" << setw(9) << 60.00 << "\n";
   
   return 0;
}
