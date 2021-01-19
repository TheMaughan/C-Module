/***********************************************************************
* Program:
*    Checkpoint 13b, Structs
*    Brother Cook, CS165
* Author:
*    Bryce Maughan, Louis Pearson, ??
* Summary: 
*    Enter a brief description of your program here!
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

struct Scripture
{
   char book[256];
   int chapter;
   int verse;
};

/**********************************************************************
 * PROMPT SCRIPTURE
 * 
 ***********************************************************************/
void promptScripture(Scripture &verse)
{
	  // Scripture verse;
	  
	  cout << "Enter book name: ";
	  //cin.ignore();
	  cin.getline(verse.book, 256);
   //cin.ignore(256, "\n");

   cout << "Enter chapter number: ";
   cin >> verse.chapter;

   cout << "Enter verse number: ";
   cin >> verse.verse;

   cin.ignore();
   // return verse;
}

/**********************************************************************
 * DISPLAY
 * 
 ***********************************************************************/
void display(Scripture verse)
{
	  cout << verse.book << " " << verse.chapter << ":" 
	       << verse.verse << endl;

}

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{
   
   Scripture scriptures[3];

   for (int i = 0; i < 3; i++)
   {
      promptScripture(scriptures[i]);
   }

   for (int a = 0; a < 3; a++)
   {
      display(scriptures[a]) 	;
   }

   return 0;
}
