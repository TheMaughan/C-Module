/***********************************************************************
* Program:
*    Practice 3.3: Count Letter
*    Brother Helfrich, CS 124
* Author:
*    The Key
* Summary: 
*    Count the frequency of a given letter in a file of the user's choice
************************************************************************/

#include <iostream>
#include <fstream> 
using namespace std;


void getFilename(char fileName[]);
char getLetter();
int  numInstances(char fileName[], char letter);

/**********************************************************************
* Prompt the user for the filename and the letter, then display the
* number of instances of that letter in the file
***********************************************************************/
int main()
{
   char fileName[256];
   char letter;

   // get the filename and letter
   getFilename(fileName);
   letter = getLetter();

   // display the count
   cout << "There are "
        << numInstances(fileName, letter)
        << " "
        << letter
        << "'s in the file\n";

   return 0;
}

/*****************************************************************
 * GET FILENAME
 * Get the filename
 *****************************************************************/
void getFilename(char fileName[])
{
   cout << "What is the name of the file: ";
   cin  >> fileName;

   return;
}

/*************************************************************
 * GET LETTER
 * Prompt the user for the letter that we will be searching for
 ************************************************************/
char getLetter()
{
   char letter;
   cout << "What letter should we count: ";
   cin  >> letter;

   return letter;
}

/**********************************************************
 * NUM INSTANCES
 * Open fileName and count the number of instances of letter
 * in the file.  Return that number
 *********************************************************/
int numInstances(char fileName[], char letterFind)
{
   ifstream fin(fileName);
   if (fin.fail())
      return 0;

   // go through the file until we are at the end
   int num = 0;
   char letterRead;  // read only one letter at a time
   while (fin >> letterRead)
   {
      // count only if it is a match
      if (letterRead == letterFind)
         num++;
   }
      
   // done!
   fin.close();
   return num;
}
