/***********************************************************************
* Program:
*    Product
* Author:
*    Bryce Maughan
* Summary: 
*    Demonstrate OOP in C++
************************************************************************/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "product.h"
using namespace std;



/**********************************************************************
 * This is a class
 * 
 ***********************************************************************
class Order{
    private:
        double products;
    public:
        string id;
        vector<Product*> products;
      
        products.push_back(new Product(p_number));
      
        double getSubtotal();
        double getTax();
        double getTotal();
        double addProduct(Product p_number);
        void displayReceipt();

        Order operator ++ (){
            products += ;
            return *this;
        }
};

double Order::addProduct(Product p_number){
    products.push_back(new Product (p_number));
    return 0;
}

double Order::getSubtotal(){
    double subTotal = 0;
    


    for (vector<Product>::iterator it = products.begin(); it != products.end(); ++it){
        cout << "it\n";
        cout << "products\n";
    }
    
    return subTotal;
}*/

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

    //p1.id = "1238223";
    //p1.name = "Sword";
    //p1.price = 1899.99;
    //p1.quantity = 10;
    //p1.display(p1.id, p1.name, p1.price, p1.quantity);

    //vector<Product*> p2;
    //p2.push_back(new Product("838ab883", "Shield", 989.75, 6));

    //for (Product* p : p2) {
    //    cout << *p->display() << endl;
    //}

    //p2.id = "838ab883";
    //p2.name = "Shield";
    //p2.price = 989.75;
    //p2.quantity = 6;
    //p2.display(p2.id, p2.name, p2.price, p2.quantity);

    //p1.getTotalPrice(p1.price, p1.quantity);
    //p2.getTotalPrice(p2.price, p2.quantity);

    //Order order1;
    //order1.id = "1138";
    //order1.addProduct(p1);
    //order1.addProduct(p2);
    //order1.getSubtotal();
    //order1.displayReceipt();


  return 0;
}