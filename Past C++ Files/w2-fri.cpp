/***********************************************************************
* Program:
*    Checkpoint 00, 
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
#include <fstream>
#include <string>
using namespace std;

struct Scripture
{
   string book;
   int chapter;
   int verse;
   string content;

};

struct Insight
{
   string text;
   Scripture script;
};

/**********************************************************************
* OPEN FILE
* Does stuff with a file
***********************************************************************/
void openFile(char fileName[])
{
   ifstream fin(fileName);
   
   Insight insight;
   Scripture scripture;
   getline(fin, insight.script.book);
   fin >> scripture.chapter;
   fin >> scripture.verse;
   fin.ignore();
   getline(fin, scripture.content);
   getline(fin, insight.text);
   
   cout << insight.script.book << endl;
   cout << scripture.chapter << endl;
   cout << scripture.verse << endl;
   cout << scripture.content << endl;
   cout << insight.text << endl;
      
   fin.close();
}


/**********************************************************************
 * MAIN
 * Does stuff
 ***********************************************************************/
int main()
{
   // get the file
   char fileName[256];
   //cout << "Please enter the filename: ";
   //cin >> fileName;
     

   //cout << ? << endl;

   openFile("w2-fri.txt");
   //int insight = insight();

   return 0;
}
