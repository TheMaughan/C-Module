/***********************************************************************
* Program:
*    Assignment 21, Debugging
*    Brother Cook, CS124
* Author:
*    Bryce Maughan
* Summary: 
*    This is just the skeleton of a program, I'm writing the stubs for
*    a program that will be completed later.
*
*    Estimated:  0.25 hrs   
*    Actual:     0.25 hrs
*      The hardest part was...it was easy?
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * These first set of stubs are for the Periodic Costs.
 ***********************************************************************/
double promptDevalue()
{
   float costDevalue;

   return costDevalue;
}

double promptInsurance()
{
   float costInsurance;
   
   return costInsurance;
}

double promptParking()
{
   float costParking;
   
   return costParking;
}

double getPeriodicCost()
{
   double costPeriodic;
   
   return costPeriodic;
}

/**********************************************************************
 * These stubs are for the Usage Costs
*********************************************************************/
double promptMileage()
{
   float mileage;
   
   return mileage;
}

double promptGas()
{
   float costGas;
   
   return costGas;
}

double promptRepairs()
{
   float costRepairs;
   
   return costRepairs;
}

double promptTires()
{
   float costTires;
   
   return costTires;
}

double getUsageCost()
{
   double costUsage;
   
   return costUsage;
}

/********************************************************
 * These stubs will be the display,
 * and the main functions.
 *******************************************************/
void display()
{
   cout << "Success\n";

   //Devalue, double costInsurance,
   //          double costParking, double costPeriodic,
   //          double mileage, double costGas,
   //          double costRepairs, double costTires,
   //          double costUsage   
   
   return;
}

int main()
{

   float costDevalue = promptDevalue();
   float costInsurance = promptInsurance();
   float costParking = promptParking();
   double costPeriodic = getPeriodicCost();
   float mileage = promptMileage();
   float costGas = promptGas();
   float costRepairs = promptRepairs();
   float costTires = promptTires();
   double costUsage = getUsageCost();

   display();
   
   return 0;
}
