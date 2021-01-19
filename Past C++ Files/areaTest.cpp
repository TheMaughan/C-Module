/***********************************************************************
* Program:
*    Test 
*    Brother Cook, CS165
* Author:
*    Bryce Maughan
* Summary: 
*    Prompt the user for two sides of a rectangle then compute the area.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

float promptHigth();
float promptWidth();
float computeArea(float higth, float width);
void display(float area);

/**********************************************************************
 * PROMPT HIGtH
 * Prompt the user for the higth of a rectangle or square.
 ***********************************************************************/
float promptHigth()
{
   float higth = 0;

   cout << "What is the higth?" 
        << endl;

   cin >> higth;

   return higth;
}

/**********************************************************************
 * PROMPT WIDTH
 * Prompt the user for the width of a rectangle or a square.
 ***********************************************************************/
float promptWidth()
{
   float width = 0;

   cout << "What is the width?" 
        << endl;

   cin >> width;

   return width;
}

/**********************************************************************
 * COMPUTE AREA
 * Computer takes the inputs of the user and computes the area here.
 ***********************************************************************/
float computeArea(float higth, float width)
{
   float area = higth * width;

   return area;
}

/**********************************************************************
 * DISPLAY
 * Displays the answer here
 ***********************************************************************/
void display(float area)
{
   cout << "The area of the rectangle is: " 
        << area 
        << endl;

}

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{
   float higth = promptHigth();
   float width = promptWidth();
   float area = computeArea(higth, width);

   display(area);

   return 0;
}
