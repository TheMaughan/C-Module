/***********************************************************************
* Program:
*    Project 03, Monthly Budget
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    Program asks user for their budget.
*
*    Estimated:  2.0 hrs
*    Actual:     3.0 hrs
*      Hardest Part was...
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * GET INCOME
 * Prompts user for income
 *********************************************************************/
float getIncome()
{

   // display instructions
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";

  // income input
   float income = 0;
   cout << "\t"
        << "Your monthly income: ";
   cin >> income;
  
   return income;
}

/**********************************************************************
 * GET BUDGET LIVING
 * Prompts user for their living expence budget amount 
 *********************************************************************/
double getBudgetLiving()
{
   // budget living input
   double budgetLiving = 0;
   cout << "\t"
        << "Your budgeted living expenses: ";
   cin >> budgetLiving;
   
 return budgetLiving;
}

/**********************************************************************
 * GET ACTUAL LIVING
 * Prompts user for their actual living expenses
 *********************************************************************/
double getActualLiving()
{
   // actual living input
   double actualLiving = 0;
   cout << "\t"
        << "Your actual living expenses: ";
   cin >> actualLiving;

 return actualLiving;
}

/**********************************************************************
 * GET TAXES
 * Prompts user for their taxes 
 *********************************************************************/
double getTaxes()
{
   // actual taxes input
   double taxes = 0;
   cout << "\t"
        << "Your actual taxes withheld: ";
   cin >> taxes;
   
 return taxes;
}

/**********************************************************************
 * COMPUTE TAXES
 * This function does not exist yet, it's future purpose is to compute
 *      the amount of taxes that are withheld.
 *********************************************************************/
double computeTaxes(float income)
{
   // convert monthly income to yearly income
   double yearlyIncome = 0;
   yearlyIncome = income * 12;
   double yearlyTax = 0;

   // computing the users income to determine the ammount of tax taken
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

   // convert the yearly taxes into monthly taxes
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
   // actual tithing input
   double tithe = 0;
   cout << "\t"
        << "Your actual tithe offerings: ";
   cin >> tithe;
   
   return tithe;
}

/**********************************************************************
 * COMPUTE TITHE
 * Computes the ammount of tithing required from budget
 **********************************************************************
int computeTithing(float income)
{
   //computing tithing
   double computeTithe = 0.10 / income;
   
   return computeTithe;
}

/**********************************************************************
 * GET OTHER
 * Prompts user for their other expenses 
 *********************************************************************/
double getOther()
{
   // actual other input
   double other = 0;
   cout << "\t"
        << "Your actual other expenses: ";
   cin >> other;

   return other;
}

/**********************************************************************
 * DISPLAY
 * Displays the budget
 *********************************************************************/
double displayBudget(float income, double budgetLiving, 
                  double actualLiving, double taxes, double tithe,
                  double other, double monthlyTax)
{

   //double monthlyTax = 0;
   // monthlyTax = yearlyTax / 12;

   // This section within the function is to compute the budget
   //double monthlyTaxes = 0.00;
   double budgetTithe = 0.10 * income;
   double budgetOther = income - 
                  0.00 /*monthlyTax*/ - budgetTithe - budgetLiving;
   double actualDifference = income - 
                  taxes - tithe - actualLiving - other;
   double budgetDifference = 0.00;

   // This section is for the output
   // display the table
   cout << "\n";
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem" << setw (24)
        << "Budget" << setw(16);

   // formatting output to display money
   cout << "Actual" << "\n";
   cout << "\t=============== =============== ===============\n";

   // display income
   cout << "\tIncome" << setw(11);
   cout << "$" << setw(11) << income
        << "    $" << setw(11) << income << "\n";

   // display taxes
   cout << "\tTaxes" << setw(12);
   cout << "$" << setw(11) << 0.00 /*monthlyTax*/
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
   float income = getIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double taxes = getTaxes();
   double monthlyTax = computeTaxes(income);
   double tithe = getTithe();
   double other = getOther();
   
   displayBudget(income, budgetLiving, actualLiving, taxes,
                 tithe, other, monthlyTax);
   
   return 0;
}
