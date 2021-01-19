/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays
*    Brother Cook, CS165
* Author:
*    Bryce Maughan
* Summary: 
*    Null
* ***********************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/************************************************************
* 
*************************************************************/
int getSize()
{
   int size = 0;
   cout << "Enter the size of the list: ";
   cin >> size;
   


   return size;
}

/************************************************************
* GET LIST
* 
*************************************************************/
void getList(int size, int list[])
{
	  for (int i = 0; i < size; i++)
	  {
	     cout << "Enter number for index "
	        << i
	        << ": ";

	     cin >> list[i];
	  }
	  cout << endl;
}

/************************************************************
* DISPLAY MULTIPLES
*************************************************************/
void displayMultiples(int size, int list[])
{
	  cout << "The following are divisible by 3:" << endl;
   for (int i = 0; i < size; i += 1)
   {
      if (list[i] % 3 == 0)
      {
	        cout << list[i] << endl;
	     }
   }
}


/************************************************************
* MAIN
************************************************************/
int main()
{
	  int list[256];
   int size = getSize();
   getList(size, list);
   displayMultiples(size, list);


   return 0;
}
