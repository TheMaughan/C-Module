//Copy & Paste


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
