/***********************************************************************
 This Program is just an experiment, It's not complete:
 Please Reffer to the 'Commerse.cpp' file for finnished product.

 This Class class file relies on the 'product.h' file and the 'product.cpp' file.
 
 I didn't make the whole Commerse program based off of this pointer model
    mostly because the methood used here in this version of the Commerse
    program is very new to me. 
I was trying to avoid pointers, but I will explore the use of pointers 
    and recreate the Commerse program using C and C++ languages while 
    implementing pointers.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "product.h" //Call the C file with member data and pointers
using namespace std;



/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    cout << "***** Testing Products *****\n";
    vector<Product*> products;
    products.push_back(new Product("1238223", "Sword", 1899.99, 10));
    products.push_back(new Product("838ab883", "Shield", 989.75, 6));


    for (Product* product : products){
        cout << *product << endl;
    }

  return 0;
}