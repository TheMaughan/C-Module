/***********************************************************************
* Program:
*    Project 07, Calender Project
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program displays the Georgian Calender
*
*    Estimated:  5 hrs
*    Actual:     7 hrs
*      Submitting this program pre maturely, I'm fed up with trying to 
*          figure out with what's wrong with my offset.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int getMonth();
int getYear();
void displayMonthName(int year, int month);
int dayInMonth(int month, int year);
bool isLeapYear(int year);
void displayCalender(int Days, int offSet);

/***********************************************************************
 * GET MONTH
 * Prompts the user for the month number and returns error if month 
 *    number is invalid.
 **********************************************************************/
int getMonth()
{
   //prompt
   int month;
   cout << "Enter a month number: ";
   cin >> month;
   
   //check for valid month
   while ((month < 1) || (month > 12))
   {
      cout << "Month must be between 1 and 12." << endl;
      cout << "Enter a month number: ";
      cin >> month;
   }
  
   return month;
}

/***********************************************************************
 * GET YEAR
 * Prompt user for year, returns error message if year is before 1753 
 *    because leapyears don't exist before 1753.
 **********************************************************************/
int getYear()
{
   //prompt
   int year;
   cout << "Enter year: ";
   cin >> year;
   
   //check for valid year
   while (year < 1753)
   {
      cout << "Year must be 1753 or later." << endl;
      cout << "Enter year: ";
      cin >> year;
   }
  
   return year;
}

/***********************************************************************
 * DISPLAY MONTH NAME
 * Takes the month number and assigns the corasponding month name to the
 *    month number.
 **********************************************************************/
void displayMonthName(int year, int month)
{
   
   if (month == 1)
   {
      cout << endl;
      cout << "January, " << year << endl;
   }
   
   if (month == 2)
   {
      cout << endl;
      cout << "February, " << year << endl;
   }

   if (month == 3)
   {
      cout << endl;
      cout << "March, " << year << endl;
   }

   if (month == 4)
   {
      cout << endl;
      cout << "April, " << year << endl;
   }

   if (month == 5)
   {
      cout << endl;
      cout << "May, " << year << endl;
   }

   if (month == 6)
   {
      cout << endl;
      cout << "June, " << year << endl;
   }

   if (month == 7)
   {
      cout << endl;
      cout << "July, " << year << endl;
   }

   if (month == 8)
   {
      cout << endl;
      cout << "August, " << year << endl;
   }

   if (month == 9)
   {
      cout << endl;
      cout << "September, " << year << endl;
   }

   if (month == 10)
   {
      cout << endl;
      cout << "October, " << year << endl;
   }

   if (month == 11)
   {
      cout << endl;
      cout << "November, " << year << endl;
   }

   if (month == 12)
   {
      cout << endl;
      cout << "December, " << year << endl;
   }
}

/***********************************************************************
 * COMPUTE OFFSET
 * Calculates where the start of the month ends up.
 * I know that all of my other functions are working, I double checked
 *    them all, I just don't know what's wrong with this function.
 **********************************************************************/
int computeoffSet(int year, int month)
{
   int countMonth = 0;
   int countYear = 0;
   int offSet = 0;
 
   // calculate how many days are there since 1753
   for (int start = 1753; start < year; start++)   
   {
      if (isLeapYear(start))
      {
         countYear += 366;
      }
      else
      {
         countYear += 365;
      }
   }
   
   // check the countYear (always wrong)
   cerr << countYear << endl;
   
   // calculate the months since January
   for (int one = 1; one < month; one++)
   {

      countMonth += dayInMonth(one, year);

   }
      
   // check the countMonth (every year seems to not be a normal year)
   cerr << countMonth << endl;
   
   // do the math for the offset
   offSet = ((countYear + countMonth) % 7);
   
   // check the offset (always wrong)
   cerr << offSet << endl;
   
   // the helpers at the lab, and fellow programers were no help,
   //     nobody seems to be able to find the problem, can you at 
   //     least find the issue?
   return offSet;
}

/***********************************************************************
 * DAY IN MONTH
 * Calculates the right ammount of days in the month.
 **********************************************************************/
int dayInMonth(int month, int year)
{
   bool leapYear = isLeapYear(year);
   
   //calculate for 31 days
   if ((month == 1) || (month == 3) 
      || (month == 5) || (month == 7)
      || (month == 8) || (month == 10)
      || (month == 12))
   {
      return 31;
   }
   
   //calculate for 30 days
   else if ((month == 4) || (month == 6)
           || (month == 9) || (month == 11))
   {
      return 30;
   }

   //is it a leap year? Get the right amount of days in Feb.
   else if ((month == 2) && (leapYear == false))
   {
      return 28;
   }

   else if ((month == 2) && (leapYear == true))
   {
      return 29;
   }
}

/***********************************************************************
 * IS LEAP
 * calculates if a year is a leapyear
 **********************************************************************/
bool isLeapYear(int year)
{

   bool leapYear;

   //divisable by 4
   if (year % 4 != 0 && 100 == 0)
   {
      return false;
   }
   
   //divisable by 400
   else if (year % 400 == 0)
   {
      return false;
   }
   
   /*/*divisable by 100
   else if (year % 100 == 0)
   {
      return false;
   }*/


   //default
   else
   {
      return true;
   }
}

/***********************************************************************
* DISPLAY CALENDER
* This function displays the calender and aligns the Days up in the
* correct order, while computing the offSet that is specifyed by the 
* user.
************************************************************************/
void displayCalender(int Days, int offSet)
{
   // display header
   cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";
   
   // declares variable count
   int value = 0;
   
   // determines the offSet
   int numOfSpaces = (offSet + 1) % 7;
   for (int space = 0; space < numOfSpaces; space++)
   {
      value++;
      cout << "    ";
   }
   
   // places the Days in the right places
   for (int day = 1; day <= Days; day++)
   {
      value++;
      cout << setw(4) << day;

      // When a day reaches Saturday, start a new line.
      // Also display the number of Days that have been specifyed
      // by the user.
      if ((value % 7 == 0) && (day != Days))
         cout << endl;
   }
   cout << endl;
}

/**********************************************************************
 * MAIN
 * Calls on the other functions
 * Delegates power in the cyber government of Calender.
***********************************************************************/
int main()
{
   int month = getMonth();
   int year = getYear();
   displayMonthName(year, month);
   isLeapYear(year);
   bool leapYear = isLeapYear(year);

   int offSet = computeoffSet(month, year);
   int Days = dayInMonth(month, year);
   displayCalender(Days, offSet);

   return 0;
}
