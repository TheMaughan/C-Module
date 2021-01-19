/***********************************************************************
* Program:
*    Test 2, Compound Interest
*    Brother Comeau, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program calculates your investment after a specified amount of
*    years. For example, if I invested $10,000 at a 7.1% interest rate,
*    in 30 years, this program would calculate that I will have $78,286.00 
*    at the end of a 30 year period.
*
*    Estimated:  2.0 hrs   
*    Actual:     2.5 hrs
*    
*    The Hardest Part:
*      Getting the arithmetic right so that it will calculate the 
*      investment properly, the issue was resolved on like 47.
************************************************************************/
#include <iostream>
#include <iomanip>
#include <cassert>
#include <fstream>
using namespace std;

/*****************************************************************
* GET INVESTMENT
* Prompt for User's investment amount
*****************************************************************/
float getInvestment()
{
   cout << "How much are you investing? ";
   float invest;
   cin >> invest;

   return invest;
}

/****************************************************************
* GET INTEREST
* Prompt for the User's interest rate.
*****************************************************************/
float getInterest()
{
   cout << "What is the interest rate in percent? ";
   float percent;
   cin >> percent;
   
   // convert the input to the proper value
   float interest = 0.01 * percent;

   return interest;
}

/********************************************************************
* GET YEARS
* Prompt the user for the years that the investment will grow.
********************************************************************/
int getYears()
{
   cout << "How long will this investment grow in years? ";
   int years;
   cin >> years;

   return years;
}

/*******************************************************************
* CALC MONEY
* This program displays the end results, which is the calculated 
*   amount of money that the user would have after a specified 
*   amount of time.
*******************************************************************/
void calcMoney(float investment, float interest, int years)
{
   
   // declare the variable
   float result;
   
   // calculate and display the investment after the specified 
   //   amount of years.
   for (int i = 1; i <= years; i++)
   {
      investment += investment * interest;
   }
   
   // display the user's calculated investment after "x" amount of years
   cout << "At the end of "
        << years
        << " years, you will have $"
        << investment
        << endl;
}

/**********************************************************************
 * MAIN
 * Calls the other functions to work.
 * Contains the code that allows the program to display money.
 ***********************************************************************/
int main()
{
   // allows the program to display money
   cout.precision(2);
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   
   // calls the other functions
   float investment = getInvestment();
   float interest = getInterest();
   int years = getYears();

   calcMoney(investment, interest, years);
   return 0;
}
