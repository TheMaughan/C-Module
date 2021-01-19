/***********************************************************************
* Program:
*    Assignment 40, Multi-Dimentinal Arrays
*    Sister Unsicker, CS124
* Author:
*    Bryce Maughan
* Summary: 
*   
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

#define ROW  3
#define COLS  3


void getFilename(char filename[]);
void loadFile(char filename[], char game[][COLS]);
void displayBoard(char game[][COLS]);
void getSaveName(char filename[]);
void saveFile(char filename[], char game[][3]);

/**********************************************************************
 * MAIN
 ***********************************************************************/
int main()
{
   char game[ROW][COLS];
   char filename[256];
   
   getFilename(filename);
   loadFile(filename, game);
   displayBoard(game);
   getSaveName(filename);
   saveFile(filename, game);

   return 0;
}

/***********************************************************
 * GET FILE NAME
***********************************************************/
void getFilename(char filename[])
{
   cout << "Enter source filename: ";
   cin >> filename;   
}


/***********************************************************
 * LOAD FILE
************************************************************/
void loadFile(char filename[], char game[][COLS])
{
   // open
   ifstream fin(filename);

   // test
   if (fin.fail())
      cout << "Failed to open: " << filename << endl;
   
   //read
   
   for (int r = 0; r < ROW; r++)
   {
      for (int c = 0; c < COLS; c++)
      {
         fin >> game[r][c];
      }
   }

   // close
   fin.close();
}


/**********************************************************
 * DISPLAY BOARD
**********************************************************/
void displayBoard(char game[][COLS])
{

   // Happen before the game board
   for (int r = 0; r < ROW; r++)
   {

      // Before each row
      for (int c = 0; c < COLS; c++)
      {

         // Before each row

         if (game[r][c] != '.')
            cout << " " << game[r][c] << " ";

         else
            cout << "   ";
        
         // After COLSumn
         if (c != COLS - 1)
            cout << "|";
      }
       
       // After row     
       cout << endl;

       if(r != ROW - 1)
          cout << "---+---+---" << endl;
   }

}

/**********************************************************
 * GET SAVE NAME
**********************************************************/
void getSaveName(char filename[])
{
   cout << "Enter destination filename: ";
   cin >> filename; 
}

/**********************************************************
 * SAVE FILE
**********************************************************/
void saveFile(char filename[], char game[][COLS])
{
   // open
   ofstream fout(filename);

   cout << "File written\n";
   
   // write
   
   for (int r = 0; r < ROW; r++)
   {
      for (int c = 0; c < COLS; c++)
      {
         fout << game[r][c];
      }
   }

   // close
   fout.close();
}