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
 * This is the Product class
 * 
 ***********************************************************************/
class Product{
    private:
        string id, name;
        double price, quantity;
    public:
        // default constructor
        Product(){
            id = "";
            name = "";
            price = 0;
            quantity = 0;
        }

        //perameterized constructor
        Product(string i, string n, double p, double q){
            // initialize private variables
            id = i;
            name = n;
            price = p;
            quantity = q;
        }

        //Overloading syntax:
        Product operator * (Product p){
            Product temp;
            temp.price = price * p.quantity;
            return temp;
        }
        

        double getTotalPrice(){
            return price * quantity;
        }

        void display(){ 
            cout << "***** Product Details *****\n";
            cout << "Id: " << id << endl; // Item number
            cout << "Name: " << name << endl; // Item Name
            cout << "Price: " << price << endl; // Retail price per Item
            cout << "Quantity: " << quantity << endl; // assume the customer filled out this feild:
            cout << "--- ^ ---\n";
            cout << "\n";
        }

        void summary(){ // Summary of Product Details
            cout << name << " | " << quantity << " | $" << getTotalPrice() << endl;
        }
};


/**********************************************************************
 * This is the Order class
 * 
 ***********************************************************************/
class Order{
    private:
        string id;
        
    public:
        Order(){
            id = "";
        }
        Order(string i){
            id = i;
        }
        string getId(){
            return id;
        }
        vector<Product> products;
        void addProduct(Product p){
            products.push_back(p);
        }
        
        double getSubTotal(){
            double subTotal = 0;
            for (Product i : products){
                subTotal += i.getTotalPrice();
            }
            return subTotal;
        }

        double getTax(){
            return getSubTotal() * 0.065;
        }
        double getTotal(){
            return getSubTotal() + getTax();
        }
        
        void displayReceipt(){
            cout << "Confimation Number: " << id << endl;
            cout << "Product Name | Quantity Ordered | Total Retail Price\n";
            cout << endl;
            cout << "***** Products in Cart *****\n";

            for (vector<Product>::iterator it = products.begin(); it != products.end(); ++it){
                (*it).summary();
            }
            cout << endl;
            cout << "------------ <| Order: " << id << " Summary |> ------------\n";
            cout << "Retail Subtotal: ----- $" << getSubTotal() << endl;
            cout << "Tax: ----------------- $" << getTax() << endl;
            cout << "Total: --------------- $" << getTotal() << endl;
        }
        void orderSummary(){
            for (Product p : products){
                p.summary();
            }
        }
};

/**********************************************************************
 * This is the Order class
 * 
 ***********************************************************************/

class Customer{
    private:
        string id;
        string name;
    public:
        vector<Order> orders;
        Customer(){
            id = "";
            name = "";
        }
        Customer(string i, string n){
            id = i;
            name = n;
        }
        string getId(){
            return id;
        }
        string getName(){
            return name;
        }
        void addOrder(Order o){
            orders.push_back(o);
        }
        int getOrderCount(){
            int orderCount = 0;
            for (Order o : orders){
                orderCount += 1;
            }
            return orderCount;
        }
        double getTotal(){
            double grandTotal = 0;
            for (Order o : orders){
                grandTotal += o.getTotal();
            }
            return grandTotal;
        }

        void history(){
            cout << "Confimation Number: " << id << endl;
            cout << "Product Name | Quantity Ordered | Total Retail Price\n";

            for (vector<Order>::iterator it = orders.begin(); it != orders.end(); ++it){
                cout << "Summary For Order: " << (*it).getId() << endl;
                (*it).orderSummary(); //p.display();
            }
            cout << endl;
            cout << "------------ <| Customer: " << id << " Summary |> ------------\n";
            cout << "Name on Account: --------------------- > " << name << endl;
            cout << "Number of Orders Made: --------------- > " << getOrderCount() << endl;
            cout << "Total Ammount for All Orders Made: --- $" << getTotal() << endl;
        }
};

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main(){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Customer Login:
    Customer customer("aa32", "Gandalf");

    // Create Shopping Cart:
    cout << endl;
    cout << endl;
    cout << "###### New Order ######\n";
    Order order1("1138");

    // Customer Adds Products to Cart:
    
    Product p1("1238223", "Sword", 1899.99, 10);
    //submit Product entry to cart:
    order1.addProduct(p1);
    
    Product p2("838ab883", "Shield", 989.75, 6);
    //submit Product entry to cart:
    order1.addProduct(p2);
    
    //Display Orter Recipt:
    order1.displayReceipt();

    // On Order Submit:
    cout << "*** Thank You for your purchase " << customer.getName() << "! ***" << endl;
    cout << "*** Your order number is: " << order1.getId() << " ***" << endl;
    customer.addOrder(order1); // Save order to customer history

    
    // Making a new order:
    cout << endl;
    cout << endl;
    cout << "###### New Order ######\n";
    Order order2("1277182");
    Product p3("2387127", "The One Ring", 1000000, 1);
    order2.addProduct(p3);
    Product p4("1828191", "Wizard Staff", 199.99, 3);
    order2.addProduct(p4);
    order2.displayReceipt();
    // On Order Submit:
    cout << "*** Thank You for your purchase " << customer.getName() << "! ***" << endl;
    cout << "*** Your order number is: " << order1.getId() << " ***" << endl;
    customer.addOrder(order2); // Save order to customer history

    // Display Saved Customer Purchase History:
    cout << endl;
    customer.history();


    


  return 0;
}