/***********************************************************************
* Program:
*    Assignment 35, Advanced Conditionals
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program returns a letter grade from a number grade
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      The most difficult part was understanding how 'int's worked with 
*      switch statements
************************************************************************/

#include <iostream>
using namespace std;

/************************************************************************
* COMPUTE GRADE SIGN
* Prompt the user for their percent and return the percent to MAIN.
*************************************************************************/
int computeGradeSign()
{
   int percentage;
   cout << "Enter number grade: ";
   cin >> percentage;
   return percentage;
}

/************************************************************************
* COMPUTE LETTER GRADE
* Take the percentage and compute the letter grade.
*************************************************************************/
void computeLetterGrade(int percentage)
{
   int letterGrade;

   switch (percentage)
   {
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
       cout << percentage << "\% is A\n";
       break;
    case 92:
    case 91:
    case 90:
       cout << percentage << "\% is A-\n";
       break;
    case 89:
    case 88:
    case 87:
       cout << percentage << "\% is B+\n";
       break;
    case 86:
    case 85:
    case 84:
    case 83:
       cout << percentage << "\% is B\n";
       break;
    case 82:
    case 81:
    case 80:
       cout << percentage << "\% is B-\n";
       break;
    case 79:
    case 78:
    case 77:
       cout << percentage << "\% is C+\n";
       break;
    case 76:
    case 75:
    case 74:
    case 73:
       cout << percentage << "\% is C\n";
       break;
    case 72:
    case 71:
    case 70:
       cout << percentage << "\% is C-\n";
       break;
    case 69:
    case 68:
    case 67:
       cout << percentage << "\% is D+\n";
       break;
    case 66:
    case 65:
    case 64:
    case 63:
       cout << percentage << "\% is D\n";
       break;
    case 62:
    case 61:
    case 60:
       cout << percentage << "\% is D-\n";
       break;
    default:
       cout << percentage << "\% is F\n";
   }

}


/**********************************************************************
 * MAIN
 * Calls the other functions
 ***********************************************************************/
int main()
{
   // Display the result
  

   // call functions
   int percentage = computeGradeSign();
   computeLetterGrade(percentage);

   return 0;
}
