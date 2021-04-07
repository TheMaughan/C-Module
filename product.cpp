/***********************************************************************
 This Program is just an experiment, It's not complete:
 Please Reffer to the 'Commerse.cpp' file for finnished product.
************************************************************************/

#include <string>
#include <iostream>
#include "product.h"

using namespace std;

/**********************************************************************
 * Set Pointers for Products class:
 * 
 ***********************************************************************/
Product::Product(const string &id, const string &name, const double &price, const double &quantity){
            this->id = id;
            this->name = name;
            this->price = price;
            this->quantity = quantity;
        }

string Product::Id() const{
    return id;
}
string Product::Name() const{
    return name;
}
double Product::Price() const{
    return price;
}
double Product::Quantity() const{
    return quantity;
}
double totalPrice = 0;
double Product::getTotalPrice(const double &price, const double &quantity) const {
    double totalPrice = price * quantity;
    return totalPrice;
}

//Product& Product::operator * (Product p){
//    Product temp;
//    temp.Price() = this->price * p.Quantity();
//    return temp;
//}

//display
ostream& operator<<(ostream &stream, const Product &product) {
    stream << "Id: " << product.Id() << endl;
    stream << "Name: " << product.Name() << endl;
    stream << "Price: " << product.Price() << endl;
    stream << "Quantity: " << product.Quantity() << endl;
    stream << product.Name() << "(" << product.Quantity() << ") - $" << totalPrice << endl;
    stream << "\n";
}