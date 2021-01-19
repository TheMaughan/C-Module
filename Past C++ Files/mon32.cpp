/***********************************************************************
* Program:
*    Assignment 32, Strings
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program is unique, the user enters some text and then enters a
*    letter and the program returns the number ot letters there are in the
*    text. The program is case sensitive.
*
*    Estimated:  0.5 hrs   
*    Actual:     0.0 hrs
*      The most difficult part...
************************************************************************/

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;





int count(char letter, char text[])
{
   int number = 0;
   for (int i = 0; text[i]; i++)
   {
      if (letter == text[i])
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
   // char text[256];
   char letter;
   cout << "Enter a letter: ";
   cin >> letter;
   cin.ignore();


   char text[256];
   cout << "Enter text: ";
   //cin.ignore(letter, 256);
   cin.getline(text, 256);

   int fred = count(letter, text);

   display(letter, fred);
   return 0;
}
