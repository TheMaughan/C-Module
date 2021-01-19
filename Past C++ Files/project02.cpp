/***********************************************************************
* Program:
*    Project 02, Monthly Budget
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Program asks user for their budget.
*
*    Estimated:  2.0 hrs
*    Actual:     0.0 hrs
*      Hardest part
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * This function displays the user's input 
 ***********************************************************************/
/*int computeIncome(float income)
{
   float getIncome() = float income
   
   return 0;
}*/

int main()
{
   // formatting output to display money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // input variables are declared
   float income;
   float budgetLiving;
   float actualLiving;
   float taxes;
   float tithe;
   float other;

   // display instructions
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";

   // income input
   cout << "\t"
        << "Your monthly income: ";
   cin >> income;

   // budget living input
   cout << "\t"
        << "Your budgeted living expenses: ";
   cin >> budgetLiving;

   // actual living input
   cout << "\t"
        << "Your actual living expenses: ";
   cin >> actualLiving;

   // actual taxes input
   cout << "\t"
        << "Your actual taxes withheld: ";
   cin >> taxes;

   // actual tithing input
   cout << "\t"
        << "Your actual tithe offerings: ";
   cin >> tithe;

   // actual other input
   cout << "\t"
        << "Your actual other expenses: ";
   cin >> other;

   // This section is for the output
   // display the table
   cout << "\n";
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem" << setw (24)
        << "Budget" << setw(16);

   {
   // formatting output to display money
   cout << "Actual" << "\n";
   cout << "\t=============== =============== ===============\n";

   // display income
   cout << "\tIncome" << setw(11);
   cout << "$" << setw(11) << income
        << "    $" << setw(11) << income << "\n";

   // display taxes
   cout << "\tTaxes" << setw(12);
   cout << "$" << setw(11) << 0.00
        << "    $" << setw(11) << taxes << "\n";

   // display tithing
   cout << "\tTithing" << setw(10);
   cout << "$" << setw(11) << 0.00
        << "    $" << setw(11) << tithe << "\n";

   // display living expenses
   cout << "\tLiving" << setw(11);
   cout << "$" << setw(11) << budgetLiving
        << "    $" << setw(11) << actualLiving << "\n";

   // display other expenses
   cout << "\tOther" << setw(12);
   cout << "$" << setw(11) << 0.00
        << "    $" << setw(11) << other << "\n";

   // display the difference
   cout << "\t=============== =============== ===============\n";
   cout << "\tDifference" << setw(7);
   cout << "$" << setw(11) << 0.00
        << "    $" << setw(11) << 0.00 << "\n";
   
   return 0;
}
}
