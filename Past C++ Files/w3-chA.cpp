/***********************************************************************
* Program:
*    Checkpoint 03a,
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
#include <string>
using namespace std;

/**********************************************************************
 * PROMPT
 * Prompt user
 ***********************************************************************/
float prompt()
{
     float number = 0;
   cout << "Enter a number: ";
   cin >> number;

     return number;
}

/**********************************************************************
 * COMPUTE
 * 
 ***********************************************************************/
struct Message
{
   string negative;
   string greater;
   string odd;
};


/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main()
{
     Message message;
   float number = prompt();

   //is the number even < 0 or > 100?
   if (number < 0)
      cout << "The number cannot be negative." << endl;
   else if (number > 100)
        cout << "The number cannot be greater than 100." << endl;
   else;
      cout << "The number cannot be odd." << endl;  
   
   while (number / 2)
      cout << "The number is " << number << "." << endl;
   
   try
   {
   
   }
   catch (const string message.negative)
   {
   
   }
        
      


   return 0;
}
