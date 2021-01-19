/***********************************************************************
* Program:
*    Checkpoint 02a, 
*    Brother Cook, CS165
* Author:
*    Bryce Maughan
* Summary: 
*    Enter a brief description of your program here!
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Name
{
   char firstName[234];
   char lastName[234];
   int number;
};

/**********************************************************************
 * Get NAME
 * Prompt user
 ***********************************************************************/
void getName()
{
	  Name name;
   cout << "Please enter your first name: ";
   cin >> name.firstName;

}

/**********************************************************************
 * GET LAST
 * last name
 ***********************************************************************/
void getLast()
{
	  Name name;
	  cout << "Please enter your last name: ";
   cin >> name.lastName;

}

/**********************************************************************
 * GET ID
 * Prompt user
 ***********************************************************************/
void getID()
{
	  Name name;
	  cout << "Please enter your id number: ";
	  cin >> name.number;
	  cout << endl;
}

/**********************************************************************
 * Display
 * 
 ***********************************************************************/
void display()
{
	  Name name;
	  cout << "Your information:" << endl;
	  cout << name.number << " - ";
	  cout << name.firstName << " ";
	  cout << name.lastName << endl;
}

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{
   //declare
	  getName();
	  getLast();
	  getID();
	  display();

   return 0;
}
