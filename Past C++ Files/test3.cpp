/***********************************************************************
* Program:
*    Test 3, Reverse a List
*    Brother Falin, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This simple program displays the content of a file in reverse order.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Getting the program to compile float variables, and to do the math
*      that gets the data displayed backwards.
************************************************************************/

#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

#define ARRAYSIZE 100

void getFilename(char filename[]);
void openFile(char filename[]);
//void display(char filename[]);

/**********************************************************************
 * MAIN
 * Declares the functions
 ***********************************************************************/

int main()
{
   char filename[256];
   
   getFilename(filename);
   openFile(filename);
  
   return 0;
}

/**********************************************************************
 * GET FILE NAME
 * Stuff
 ***********************************************************************/
void getFilename(char filename[])
{
   cout << "Enter filename: ";
   cin >> filename;
}

/**********************************************************************
 * OPEN FILE
 * Stuff
 ***********************************************************************/
void openFile(char filename[])
{
   // open
   ifstream fin(filename);

   // test
   if (fin.fail())
      cout << "Failed to open: " << filename << endl;
   
   //read
   char text[25];

    for (int i = 0; i < ARRAYSIZE; i++)
   {
       cout << text[i] << endl;
   }
   
   cout << "-----------------" << endl;

   for (int i = ARRAYSIZE - 1; i >= 0; i--)
   {
       cout << text[i] << endl;
   }


   // close
   fin.close();
}

/**********************************************************************
 * DISPLAY
 * Stuff
 ***********************************************************************
void display(char filename[]);
{

}
*/