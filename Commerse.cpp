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
using namespace std;

/**********************************************************************
 * This is a class
 * 
 ***********************************************************************/
class Product{
    public:
        string id;
        string name;
        double price;
        double quantity;
        double getTotalPrice(double p, double q);
        void display(string i, string n, double p, double q);

};

double Product::getTotalPrice(double p, double q){
    return p * q;
}

void Product::display(string i, string n, double p, double q){
    cout << "Id: " << i << endl;
    cout << "Name: " << n << endl;
    cout << "Price: " << p << endl;
    cout << "Quantity: " << q << endl;
    cout << n << "(" << q << ") - $" << getTotalPrice(p, q) << endl;
    cout << "\n";
}

/**********************************************************************
 * This is a class
 * 
 ***********************************************************************/
class Order{
    public:
        string id;
        vector<Product> products;
        double getSubtotal();
        double getTax();
        double getTotal();
        void addProduct(Product p1, Product p2);
        void displayReceipt();
};

void Order::addProduct(Product p1, Product p2){
    products.push_back(p1);
    products.push_back(p2);
}

double Order::getSubtotal(){
    double subTotal = 0;
    for (vector<Product>::iterator it = products.begin(); it != products.end(); ++it){
        subTotal += p.getTotalPrice();
    }
    
    return subTotal;
}

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    cout << "***** Testing Products *****\n";
    Product p1; 
    p1.id = "1238223";
    p1.name = "Sword";
    p1.price = 1899.99;
    p1.quantity = 10;
    p1.display(p1.id, p1.name, p1.price, p1.quantity);

    Product p2;
    p2.id = "838ab883";
    p2.name = "Shield";
    p2.price = 989.75;
    p2.quantity = 6;
    p2.display(p2.id, p2.name, p2.price, p2.quantity);


    Order order1;
    order1.id = "1138";
    order1.addProduct(p1);
    order1.addProduct(p2);
    order1.getSubtotal();
    order1.displayReceipt();


  return 0;
}