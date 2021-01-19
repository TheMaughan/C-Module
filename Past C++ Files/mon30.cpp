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
 * 
 ***********************************************************************/
int averageGrade(int grade[], int tenGrades)
{
   // calculate the average grade
   int mean = 0;
   int count = 0;
   for (int i = 0; i < MAX; i++)
   {
      if (grade[i] != -1)
      {
         count++;
         mean += grade[i];
      }
   	
   	
   }
   return mean / count;
}
/******************************************************************************
*******************************************************************************/
int search(int grade[], int tenGrades)
{
   for (int i = 0; i < MAX; i++)
   	  if (-1 == grade[i])
   	  	{
   	  		grade == 0;
            
            MAX - 1;
   	  	}
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   // declare the array
   int grade[10];

   // declares the other two functions
   getGrades(grade, 10);
   int mean = averageGrade(grade, 10);

   if (mean == -1)
   	  cout << "Average Grade: ---%\n";
   else
   	  cout << "Average Grade: " << mean << "%\n";

   return 0;
}
