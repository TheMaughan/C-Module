
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class Number {
  private:
    int value;
  public:
    Number(int init_value) {
      value = init_value;
    }
    int get_value() {
      return value;
    }
    //The second argument is 
    //a. The other instance of the class when the operator is a binop
    //b. whatever argument it is for something like square brackets []
    Number operator + (Number other) {
      return Number(value + other.get_value());
    }
};

int main() {
    Number num1(5);
    Number num2(10);
    Number result = num1 + num2;
    std::cout<<result.get_value()<<"\n";
    return 0;
}