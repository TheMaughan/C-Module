/***********************************************************************
* Program:
*    Assignment 34, Pointer Arithmetic
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program is unique, the user enters some text and then enters a
*    letter and the program returns the number ot letters there are in the
*    text. The program is case sensitive. 
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <fstream>
#include <cctype>
#include <cassert>
using namespace std;

int count(char letter, char text[])
{
	  int number = 0;
   for (char * p = text; *p; p++)
   {
      if (letter == *p)
      	number++;
   }
   return number;
}

void display(const char letter, int fred)
{
	cout << "Number of \'" << letter << "\'s: " << fred << endl;
}

/**********************************************************************
 * MAIN
 * Calls the other functions.
 ***********************************************************************/
int main()
{
   char letter;
   cout << "Enter a letter: ";
   cin >> letter;
   cin.ignore();


   char text[256];
   cout << "Enter text: ";
   cin.getline(text, 256);



   int fred = count(letter, text);

   display(letter, fred);
   return 0;
}