//Copy & Paste
/***********************************************************************
 * Program:
 *    Assignment 00
 *    Brother Cook, CS124
 * Author:
 *    Bryce Maughan
 * Summary:
 *    I'm making a graphic
 *
 *    Estimated:  0.5  hrs
 *    Actual:     0.01  hrs
 *      Please describe briefly what was the most difficult part.
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main function, displayes "Hello World"
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   // display
   cout << "@@@@@@@@" << endl;
   cout << "@" << setw(7) << "@" << endl;
   cout << "@" << setw(4) << "BM" << setw(3) << "@" << endl;
   cout << "@" << setw(7) << "@" << endl;
   cout << "@@@@@@@@" << endl;

   return 0;
}
