/***********************************************************************
* Program:
*    Assignment 31, Array Design
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
#include <fstream>
using namespace std;

#define MAX 100

int readfile(const char filename[], int data[], int max);
void display(const int data[], int num);

/**********************************************************************
 * GET GRADES
 * Prompt the user for their grades
 ***********************************************************************/
void getGrades(int grade[], int tenGrades)
{
   // get the list of names
   //int mean = 0;
   for (int count = 0; count < tenGrades; count++)
   {
       assert(count >= 0 && count < tenGrades);
       cout << "Grade " << count + 1 << ": ";
       cin >> grade[count];
   }
}

/**********************************************************************
 * AVERAGE GRADES
 * 
 ***********************************************************************/
float averageGrade(int grade[], int tenGrades)
{
   // calculate the average grade
   float mean = 0;
   int count = 0;
   for (int i = 0; i < tenGrades; i++)
   {
      if (grade[i] != -1)
      {
         count++;
         mean += grade[i];
         
            if ((mean += grade[i]) == 0)
         {
            cout << "Average Grade: ---%\n";
         }
      }
   }
   
   int condition = mean / count;

   return condition;
}

/**********************************************************************
 * MAIN
 * Delegates the power
 ***********************************************************************/
int main()
{
   // declare the array
   int grade[10];

   // declares the other two functions
   getGrades(grade, 10);
   float mean = averageGrade(grade, 10);

   if (mean == -1)
      cout << "Average Grade: ---%\n";
   else
      cout << "Average Grade: " << mean << "%\n";

   return 0;
}
