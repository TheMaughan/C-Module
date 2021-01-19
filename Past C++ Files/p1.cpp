/**************************************************
* Program:
*    Test 1,
*    Brother Comeau, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program promps for your GPA then displays it.
************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;

/***********************************************************
 * GET GRADE
 *
 **********************************************************/
double getGrade()
{
   // prompt the user for their grade
   float yourGrade;
   cout << "What is your GPA? ";
   cin >> yourGrade;
   
   return yourGrade;
}

/***********************************************************
 * DISPLAY
 *
 **********************************************************/
float display(float yourGrade)
{
   // displays the grade
   cout << "Your GPA is "
        << yourGrade
        << endl;
}

/***********************************************************
 * MAIN
 *
 **********************************************************/
int main()
{
   //alows the program to display money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);

   // assigns the variable to their function
   float yourGrade = getGrade();
   display(yourGrade);
   
   return 0;
}
