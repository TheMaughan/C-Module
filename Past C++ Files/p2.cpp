/**************************************************
* Program:
*    Test 1,
*    Brother Comeau, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This program tells you if you passed your test.
************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/*********************************************************
 * GET SCORE
 * promps the user for their test grade
 *******************************************************/
int getScore()
{
   // prompts the user for their score on the test
   cout << "What is your grade on the last test? ";
   int score;          // stores the user's test score in a variable called "score"
   cin >> score;

   return score;
}

/*************************************************************
 * PASS SCORE
 * displays a message if the user has a passing grade
 ************************************************************/
void passScore()
{
   cout << "You passed the test\n";
   return;
}

/*************************************************************
 * FAIL SCORE
 * displays a message if the user has a failing grade
 ************************************************************/
void failScore()
{
   cout << "You failed the test\n";
   return;
}

/*************************************************************
 * PASS SCORE
 * Function determines if the user passed the test
 ***********************************************************/
bool computeScore(int score)
{
   return (score >= 60);
}

/*************************************************************
 * MAIN
 * This function calls the other functions to act
 * This function is the boss
 ************************************************************/
int main()
{
   // assigns the variable to the function
   int score;
   score = getScore();

   // tell the user if they passed
   if (computeScore(score))
       passScore();
   else
      failScore();
     
   
   return 0;
}
