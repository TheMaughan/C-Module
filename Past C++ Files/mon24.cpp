#include <iostream>
using namespace std;

int main()
{
   int iUp = 0;
   int iDown = 10;

   while (iUp < iDown)
   {
      cout << iUp << '\t'
           << iDown << endl;
      iUp++;
      iDown--;
   }
   
   return 0;
}
