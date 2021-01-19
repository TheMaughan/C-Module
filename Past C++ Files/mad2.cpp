/***********************************************************************
* Program:
*    Project 09, Mad Lib Program
*    Brother Comeau, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program takes a array of text, reads it, and every time it comes 
*    across a "<" and a ">", it interperates the text inside the "<>" and 
*    prompts for the appropriate questions.
*
*    Estimated:  5.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

/*********************************************************************************
* GET FILENAME
* Prompt the user for their file
*********************************************************************************/
void getFilename(char filename[])
{
	  cout << "Filename: ";
	  cin >> filename;
	  //cin.getline (filename, 256);
}

int askQuestion(char question[])
{
	  // format the question

 	 cin.getline(question, 32);
	
}


/****************************************************************
* READ FILE
* "int" represents the number of words in string.
*****************************************************************/
int readFile(char filename[], char story[][32])
{
	  // open
	  ifstream fin(filename);

 	 // fail
  	if (fin.fail())
 		return -1;

	  // read it
	  int count = 0;
  	while (fin >> story[count])
	  {
		  // assuming this is a question
	  	//askQuestion(story[count]);
	  	count++;
  	}

	  //close it
  	fin.close();

	  // returning
  	return count;
}

/***********************************************************************
* IS PUNC
* Don't know what this function does yet
***********************************************************************/
int isPunc(int character)
{
	return 0;
}

/*************************************************************************
* DISPLAY STORY
* Display the story
**************************************************************************/
void displayStory(char story[][32], int count)
{
   for (int i = 0; i < count; i++)
   {
   	cout << story[i] << endl;
   }
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
	  char story[256][32];

	  // get filename from user
	  char filename[256];
	  getFilename(filename);

   cerr << "File name entered is: " << filename << endl;

	  // read the file
	  int count = readFile(filename, story);
	  cerr << count << endl;

   displayStory(story, count);

   return 0;
}
