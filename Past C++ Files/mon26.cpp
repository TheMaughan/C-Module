/***********************************************************************
* Program:
*    Assignment 26, Files
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*     This program reads data from a file and computes the average of
*     the 10 number grades that are stored within the file.
*
*    Estimated:  0.5 hrs
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/************************************************************
* GET FILE AVERAGE
* Prompts the user for the file name and calculates the 
* average.
*************************************************************/
float getFileAverage(char fileName[])
{
   // open the file
   ifstream fin(fileName);
   if (fin.fail())
   {
      return false;
   }

   // read data and calculate the mean
   cout.precision(0);
   cout.setf(ios::fixed);
   float numbers;
   float mean = 0;
   while (fin >> numbers)
      mean += numbers;
   mean /= 10;

   // close the file
   fin.close();

   return mean;
}

/************************************************************
* MAIN
************************************************************/
int main()
{
   // get the file
   char fileName[256];
   cout << "Please enter the filename: ";
   cin >> fileName;

   // Display the mean
   float mean = getFileAverage(fileName);
   if ((mean <= 88) || (mean >= 90))
   {
      cout << "Error reading file "
         << "\""
         << fileName
         << "\""
         << endl;
   }
   else
   {
      cout << "Average Grade: "
           << getFileAverage(fileName)
           << "%"
           << endl;
   }
   
   return 0;
}
