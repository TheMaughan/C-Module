/**************************************************
* Program:
*    Test, 01
*    Brother Comeau, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program persuades the user to study more if they
*    get a score that is less than 85%.
************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/*********************************************************
* GET SCORE
* Prompts the user for their score
**********************************************************/
int getScore()
{
   // prompt for the score
   cout << "What was your score on the practice final in percentage points? ";
   int score;
   cin >> score;
   
   return score;
}

/*********************************************************
* STUDY MORE
* Prompts the user to study before taking the test
**********************************************************/
void studyMore()
{
   cout << "\tMore studying is required.\n";
   return;
}

/*********************************************************
* READY FOR TEST
* Authorizes the user to take the test
**********************************************************/
void readyForTest()
{
   cout << "\tYou are ready to take the test!\n";
   return;
}

/*********************************************************
* COMPUTE SCORE
* Looks at the User's score and sees if the user is ready
*      to take the teat.
**********************************************************/
bool computeScore(int score)
{
   return (score < 85);
}


/**********************************************************
 * MAIN
 * Calls on the other functions to get their jobs done,
 *      and also tests the score to see if it's true or
 *      false.
 ********************************************************/
int main()
{
   // calls on computeScore
   int score;
   score = getScore();

   // true of false
   if (computeScore(score))
      studyMore();
   else
      readyForTest();

   return 0;
}
