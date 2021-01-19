/***********************************************************************
* Program:
*    Assignment 14, Matthew 18:21-22
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program will address Peter's question to the Lord in 
*    Matthew 18:21-22
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
* This function just displays Peter's question
***********************************************************************/
void questionPeter()
{
   cout << "Lord, how oft shall my brother sin against me, and I "
        << "forgive him?\n";
   cout << "Till seven times?\n";
}

/********************************************************************
* This function accurately respond displays the Lords answer in a
* logical and literal point of view.
********************************************************************/
int responseLord()
{
 int answer = 7 * 70;

 return answer;
}
/********************************************************************
* Main displays both "responseLord" and "questionPeter" combined.
* Main also displays the Lord's complete responce while
* "responseLord" only displays the math logic in the Lord's answer.
********************************************************************/
int main()
{
  questionPeter();

  cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
  cout << "times: but, Until " << responseLord() << ".\n";
   return 0;
}
