/***********************************************************************
* Program:
*    Assignment 30, Array Syntax
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    
*    Estimated:  1.0 hrs   
*    Actual:     1.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

#define MAX 10

/**********************************************************************
 * GET GRADES
 * Prompt the user for their grades
 ***********************************************************************/
void getGrades(int grade[], int tenGrades)
{
   // get the list of names
   //int mean = 0;
   for (int count = 0; count < MAX; count++)
   {
   	   assert(count >= 0 && count < MAX);
   	   cout << "Grade " << count + 1 << ": ";
   	   cin >> grade[count];
   }
}

/**********************************************************************
 * AVERAGE GRADES
 * Take the grade and compute the avarage
 ***********************************************************************/
int averageGrade(int grade[], int tenGrades)
{
   // calculate the average grade
   int mean = 0;
   float count = 0;
   for (int i = 0; i < MAX; i++)
   {
      if (grade[i] != -1)
      {
         count++;
         mean += grade[i];
      }
   	
   	
   }

   //float total;
   //total = mean / count;

   if (count == 0)
   return -1;

   else
   return mean / count;
}

/**********************************************************************
  * MAIN
  * call the other functions
 ***********************************************************************/
int main()
{
   //important stuff
   cout.setf(ios::fixed);
   cout.precision(0);
   
   // declare the array
   int grade[10];

   // declares the other two functions
   getGrades(grade, 10);
   int mean = averageGrade(grade, 10);

   if (averageGrade(grade, 10) == -1)
   	  cout << "Average Grade: ---%\n";
   else
   	  cout << "Average Grade: " << mean << "%\n";

   return 0;
}
