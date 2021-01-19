/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother {Burton, Falin, Ercanbrack}, CS165
* Author:
*    Bryce Maughan
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
     double c1;
     double c2;
};


// TODO: Add your prompt function here
/**********************************************************************
 * Function: promptReal
 * Purpose: Prompt user for a real number.
 *********************************************************************/
double promptReal()
{
   int real = 0;
   cout << "Real: ";
   cin >> real;
   return real;
}

/**********************************************************************
 * Function: promptImaginary
 * Purpose: Prompt user for a imaginary number.
 ***********************************************************************/
double promptImaginary()
{
     int imaginary = 0;
     cout << "Imaginary: ";
     cin >> imaginary;
     return imaginary;
}

// TODO: Add your display function here
/**********************************************************************
 * Function: display
 * Purpose: display stuff
 ***********************************************************************/
void display()
{

}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 *********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   // TODO: Fill in the body of the add function


}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2


   // Call your prompt function twice to fill in c1, and c2 
   double real = promptReal();
   double imaginary = promptImaginary();

   // Declare another Complex for the sum


   // Call the addComplex function, putting the result in sum;

   
   cout << "\nThe sum is: ";
   display(/*sum*/);
   cout << endl;
 
   return 0;
}


