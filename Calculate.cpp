/***********************************************************************
* Program:
*    Calculate
* Author:
*    Bryce Maughan
* Summary: 
*    Demonstrate C++ and calculate numbers from file or orders
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**********************************************************************
 * This is a class
 * 
 ***********************************************************************/
class getFile{
    public:
        fstream myFile("rates.csv");
};


/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main(){
  ComputePay myObj;

  myObj.myNum = 15;
  myObj.myString = "Text";

  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
