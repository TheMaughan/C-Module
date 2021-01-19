/***********************************************************************
* Program:
*    Project 04, Monthly Budget
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Program asks user for their budget.
*
*    Estimated:  1.0 hrs
*    Actual:     0.0 hrs
*    Hardest Part
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * GET INCOME
 * Prompts user for monthlyIncome
 *********************************************************************/
float getIncome()
{
   // display instructions
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";

   // store monthlyIncome
   float monthlyIncome;

   // display monthlyIncome input
   cout << "\t"
        << "Your monthly income: ";
   cin >> monthlyIncome;

   // returns data stored in the variable monthlyIncome back to main
   return monthlyIncome;
}

/**********************************************************************
 * GET BUDGET LIVING
 * Prompts user for their living expense budget amount 
 *********************************************************************/
double getBudgetLiving()
{
   // store the data
   double budgetLiving;

   // display monthlyIncome input
   cout << "\t"
        << "Your budgeted living expenses: ";
   cin >> budgetLiving;

   // returns data stored in the variable budgetLiving back to main
   return budgetLiving;
}

/**********************************************************************
 * GET ACTUAL LIVING
 * Prompts user for their actual living expenses
 *********************************************************************/
double getActualLiving()
{
   // store data
   double actualLiving;

   // budget living input
   cout << "\t"
        << "Your actual living expenses: ";
   cin >> actualLiving;

   // returns data stored in the variable actualLiving back to main
   return actualLiving;
}

/**********************************************************************
 * GET TAXES
 * Prompts user for their taxes 
 *********************************************************************/
double getTaxes()
{
   // store data
   double taxes;

   // actual taxes input
   cout << "\t"
        << "Your actual taxes withheld: ";
   cin >> taxes;
   
   // returns data stored in the variable taxes back to main
   return taxes;
}

/**********************************************************************
 * COMPUTE TAXES
 * This function's purpose is to compute
 *      the amount of taxes that are withheld.
 *********************************************************************/
double computeTaxes(float monthlyIncome)
{
   // converting the monthly monthlyIncome into yearly monthlyIncome
   double yearlyIncome = 0;
   yearlyIncome = monthlyIncome * 12;
   double yearlyTax = 0;   

   // computing the user's monthlyIncome to see how much tax is taken
   if (yearlyIncome <= 15100)
      yearlyTax = yearlyIncome * 0.10;
   
   else if (yearlyIncome <= 61300)
      yearlyTax = 1510 + 0.15 * (yearlyIncome - 15100);
   
   else if (yearlyIncome <= 123700)
      yearlyTax = 8440 + 0.25 * (yearlyIncome - 61300);
   
   else if (yearlyIncome <= 188450)
      yearlyTax = 24040 + 0.28 * (yearlyIncome - 123700);
   
   else if (yearlyIncome <= 336550)
      yearlyTax = 42170 + 0.33 * (yearlyIncome - 188450);
   
   else
      yearlyTax = 91043 + 0.35 * (yearlyIncome - 336550);

   // converting the yearly taxes into monthly taxes
   double monthlyTax = 0;
   monthlyTax = yearlyTax / 12;

   return monthlyTax;
}

/**********************************************************************
 * GET TITHE
 * Prompts user for tithing needed 
 *********************************************************************/
double getTithe()
{
   // store data
   double tithe;   

   // actual tithing input
   cout << "\t"
        << "Your actual tithe offerings: ";
   cin >> tithe;
   
   // returns data stored in the variable tithe back to main
   return tithe;
}

/**********************************************************************
 * GET OTHER
 * Prompts user for their other expenses 
 *********************************************************************/
double getOther()
{
   // store data
   double other;

   // actual other input
   cout << "\t"
        << "Your actual other expenses: ";
   cin >> other;
   
   // returns data stored in the variable other back to main
   return other;
}

/**********************************************************************
 * DISPLAY
 * Displays the budget
 *********************************************************************/
double displayBudget(float monthlyIncome, double budgetLiving,
                  double actualLiving,
                  double taxes, double monthlyTax,
                  double tithe, double other)
{
   // This section within the function is to compute the budget
   double budgetTithe = 0.10 * monthlyIncome;
   double budgetOther = monthlyIncome - 
                  monthlyTax - budgetTithe - budgetLiving;

   double actualDifference = monthlyIncome - 
                  taxes - tithe - actualLiving - other;
   double budgetDifference = 0.00;
   
   // display the table
   cout << "\n";
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem" << setw(24)
        << "Budget" << setw(16)
        << "Actual" << "\n";
   cout << "\t=============== =============== ===============\n";

   // display monthlyIncome
   cout << "\tIncome" << setw(11);
   cout << "$" << setw(11) << monthlyIncome
        << "    $" << setw(11) << monthlyIncome << "\n";

   // display taxes
   cout << "\tTaxes" << setw(12);
   cout << "$" << setw(11) << monthlyTax
        << "    $" << setw(11) << taxes << "\n";

   // display tithing
   cout << "\tTithing" << setw(10);
   cout << "$" << setw(11) << budgetTithe
        << "    $" << setw(11) << tithe << "\n";

   // display living expenses
   cout << "\tLiving" << setw(11);
   cout << "$" << setw(11) << budgetLiving
        << "    $" << setw(11) << actualLiving << "\n";

   // display other expenses
   cout << "\tOther" << setw(12);
   cout << "$" << setw(11) << budgetOther
        << "    $" << setw(11) << other << "\n";

   // display the difference
   cout << "\t=============== =============== ===============\n";
   cout << "\tDifference" << setw(7);
   cout << "$" << setw(11) << budgetDifference
        << "    $" << setw(11) << actualDifference << "\n";

   
}

/**********************************************************************
 * MAIN
 * This function displays the user's input 
***********************************************************************/
int main()
{
   // formatting output to display money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   // input variables are declared
   float monthlyIncome = getIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double taxes = getTaxes();
   double tithe = getTithe();
   double other = getOther();
   double monthlyTax = computeTaxes(monthlyIncome);
   
   displayBudget(monthlyIncome, budgetLiving, actualLiving, taxes, monthlyTax,
      tithe, other);
   
   return 0;
} 
