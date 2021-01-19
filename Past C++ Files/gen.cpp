/***********************************************************************
* Program:
*    Assignment ##, ????
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
using namespace std;

char getSequenceNumber();
int getRelativeNumber();
int getRelativeName(int relativeNum, char name[][50]);
char getRelativeDNA(int relativeNum, char name[][50], char DNA[][10]);

/************************************************************************
* Get SEQUENCE NUMBER
* Prompt user for DNA number.
************************************************************************/
char getSequenceNumber()
{
	  char userDNA;
   cout << "Enter your DNA Sequence: ";
   cin >> userDNA;
   return userDNA;
}

/************************************************************************
* GET RELATIVE NUMBER
* Prompt user for the number of inputs they wish to enter.
************************************************************************/
int getRelativeNumber()
{
   int relativeNum = 0;
   cout << "Enter the number of potential relatives: ";
   cin >> relativeNum;
   return relativeNum;
}


/************************************************************************
* GET RELATIVE NAME
* Prompt user for their relative's name.
************************************************************************/
void getRelativeName(int relativeNum, char name[][10])
{
	  for (int i = 0; i < relativeNum; i++)
	  {
	     cout << "Please enter the name of relitive #"
	        << i
	        << ": ";
	     cin >> name[i];
	     
   }

}

/************************************************************************
* GET RELATIVE DNA
* Prompt user for their relative's DNA.
************************************************************************/
char getRelativeDNA(int relativeNum,  char name[][50], char DNA[][10])
{
	  for (int i = 0; i < relativeNum; i++)
	  {
	     cout << "Please enter the DNA sequence for"
	        << name[i][50]
	        << ": ";
	     cin >> DNA[i][10];
	     
   }

}


/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{

   char name[100][50];
   char DNA[100][10];

   char userDNA = getSequenceNumber();
   int relativeNum = getRelativeNumber();
   void getRelativeName(int relativeNum, char name);  

   return 0;
}
