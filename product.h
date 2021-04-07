/***********************************************************************
 This Program is just an experiment, It's not complete:
 Please Reffer to the 'Commerse.cpp' file for finnished product.
************************************************************************/

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

///**********************************************************************
 //* This is a class
 //* 
 //***********************************************************************/
class Product{
    private:
        string id;
        string name;
        double price;
        double quantity;
    public:
        Product(const string &id, const string &name, const double &price, const double &quantity);
        string Id() const;
        string Name() const;
        double Price() const;
        double Quantity() const;
        double getTotalPrice(const double &price, const double &quantity) const;
};
ostream& operator<<(ostream &stream, const Product &products);
#endif