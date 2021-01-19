/***********************************************************************
* Program:
*    Checkpoint 13b  
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
#include <string.h>
using namespace std;

/************************************************************************
* MY ARRAY
* This is Sparta!!
************************************************************************/
/*void myArray(char name[][50], char street[][50], char city[][50],
             char state[][50] /*int zip[][50])
{
	  for (int i = 0; i < 3; i++)
	  {
	     cout << "Enter your name: ";
	     cin >> name[i];
	     cout << endl;


	     cout << "Enter your street: ";
	     cin >> street[i];
	     cout << endl;

	     cout << "Enter your City: ";
	     cin >> city[i];
	     cout << endl;

	     cout << "Enter your state: ";
	     cin >> state[i];
	     cout << endl;

	     /*cout << "Enter your zip-code: ";
	     cin >> zip[i];
	     cout << endl;
	  }

}

*/

struct Address
{
   char name[50];
   char street[50];
   char city[50];
   char state[50];
   int zip;
};

/**********************************************************************
 * USER ONE
 * 
 ***********************************************************************/
void userOne(char name[][50], char street[][50], char city[][50],
             char state[][50], int zip[])
{

   

   cout << "Enter your name: ";
	  cin >> name[3];

   cout << "Enter your street: ";
   cin >> street[3];
	  
	  cout << "Enter your City: ";
	  cin >> city[3];

	  cout << "Enter your state: ";
	  cin >> state[3];

	  cout << "Enter your zip: ";
	  cin >> zip[3];
   
}

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{
   
   char name[3][50];
   char street[3][50];
   char city[3][50];
   char state[3][50];
   int zip[3];

   

   //char array[5][50];

   //myArray(name, street, city, state);
   userOne(name, street, city, state, zip);

   return 0;
}
