/***********************************************************************
* Program:
*    Checkpoint 01a, C++ Basics  
*    Brother Cook, CS165
* Author:
*    Bryce Maughan
* Summary: 
*    Null
* ***********************************************************************/

#include <iostream>
using namespace std;


/**********************************************************************
 * Function: MAIN
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   cout << "Hello CS 165 World!" << endl;
   
   char name[20];
   cout << "Please enter your first name: ";
   cin >> name;
   
   int age = 0;
   cout << "Please enter your age: ";
   cin >> age;
   cout << endl;

   cout << "Hello " 
      << name 
      << ", you are " 
      << age 
      << " years old." 
      << endl;  

   return 0;
}
