/***********************************************************************
* Program:
*    Assignment 25, Loop Design
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program displays a calender, the user determines the ammount of
*    days and the offset.
*
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*      Getting the loops to work right
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/***********************************************************************
* GET NUMBER OF DAYS
* Prompts the user for the number of days in the month.
************************************************************************/
int getNumDays()
{
   // prompt
   cout << "Number of days: ";
   int numDays;
   cin >> numDays;
   
   // returns the number of Days in the month
   return numDays;
}

/***********************************************************************
* GET OFFSET
* Prompts the user for the offset.
************************************************************************/
int getOffset()
{
   // prompt
   cout << "Offset: ";
   int offset;
   cin >> offset;

   // returns offset
   return offset;
}

/***********************************************************************
* DISPLAY CALENDER
* This function displays the calender and aligns the days up in the
* correct order, while computing the offset that is specifyed by the 
* user.
************************************************************************/
void displayCalender(int offset, int numDays)
{
   // display header
   cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";
   
   // declares variable count
   int value = 0;
   
   // determines the offset
   if (offset != 6)
   {
      for (int space = 0; space <= offset; space++)
      {
         value++;
         cout << "    ";
      }
   }
   
   // places the days in the right places
   for (int day = 1; day <= numDays; day++)
   {
      value++;
      cout << setw(4) << day;

      // When a day reaches Saturday, start a new line.
      // Also display the number of days that have been specifyed
      // by the user.
      if ((value % 7 == 0) && (day != numDays))
         cout << endl;
   }
   cout << endl;
}

/**********************************************************************
 * MAIN
 * Calls the other functions.
 ***********************************************************************/
int main()
{
   // calls the other functions
   int numDays = getNumDays();
   int offset = getOffset();

   displayCalender(offset, numDays);
   return 0;
}
