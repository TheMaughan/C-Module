/***********************************************************************
* Program:
*    Hobbit
* Author:
*    Bryce Maughan
* Summary: 
*    Demonstrate OOP in C++
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/**********************************************************************
 * This is a class
 * 
 ***********************************************************************/
class Hobbit{
    public:
        int strength = 10;
        int eatAgain = 4;
        void walk();
        void sleep();
        void eat();
        void display();

};

void Hobbit::walk(){
    if (eatAgain <= 0){
        cout << "Need to Eat!\n";
    } else {
        strength -= 1;
        eatAgain -= 1;
    }
}

void Hobbit::sleep(){
    if (eatAgain <= 0){
        cout << "Need to Eat!\n";
    } else {
        strength += 1;
        eatAgain -= 1;
    }
}

void Hobbit::eat(){
    strength += 2;
    eatAgain = 4;
    }

void Hobbit::display(){
    cout << "Hobbit Strength: " << strength << " Eat Again: " << eatAgain << endl;
}

/**********************************************************************
 * MAIN
 * 
 ***********************************************************************/
int main(){
    Hobbit frodo;
    char choice = '.';
    while(choice != 'q'){
        frodo.display();
        cout << "(w)alk (s)leep (e)at (q)uit  >\n";
        cin >> choice;
        if(choice == 'w'){
            frodo.walk();
        } else if(choice == 's'){
            frodo.sleep();
        } else if(choice == 'e'){
            frodo.eat();
        }
        cout << "\n";
    }
  return 0;
}
