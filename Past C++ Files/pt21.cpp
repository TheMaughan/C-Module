/***********************************************************************
 * This is a demo program...
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void getFileName(char fileName[]);
float readFile(char fileName[]);
void display(float average);


int main()
{
   char fileName[256];
   getFileName(fileName);

   cout << fileName << endl;
 
   float average = readFile(fileName);

   if(average < 0)
      cout << "Error reading file \"" << fileName << "\"";
   else
   	display (average);

   return 0;
}

void display(float average)
{
   cout.setf(ios::fixed);
   cout.precision(0);

   cout << "Average Grade: " << average << "%" << endl;
}

float readFile(char fileName[])
{
	  //open file
	  ifstream fin(fileName);
      
   //fail to open?
   if(fin.fail())
   {
   	return -1;

   }
   
   // read file and compute
   float grade;
   float total = 0;
   int count = 0;
   while(fin >> grade)
   {
      total += grade;
      count++;
   }
   
   fin.close();

   if(count != 10)
   {
   	return -2;
   }

   float average = total / count;

   return average;


}



void getFileName(char fileName[])
{
	  cout << "Please enter the file name: ";
	  cin >> fileName;
}