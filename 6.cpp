#include <iostream>
using namespace std;
 
class Float {
private:
  float x;
 
public:
  // constructor to initialize x
  Float(float a) : x(a) {}
 
  // function to return x
  float getX() const {
    return x;
  }
 
  // overload the + operator for two Float objects
  Float operator+(const Float& other) {
    return Float(x + other.x);
  }
 
  // overload the - operator for two Float objects
  Float operator-(const Float& other) {
    return Float(x - other.x);
  }
 
  // overload the * operator for two Float objects
  Float operator*(const Float& other) {
    return Float(x * other.x);
  }
 
  // overload the / operator for two Float objects
  Float operator/(const Float& other) {
    return Float(x / other.x);
  }
};
 
int main() {
  Float f1(2.5);
  Float f2(1.5);
  Float f3 = f1 + f2;
  cout << "Sum of f1 and f2: " << f3.getX() << endl;
  Float f4 = f1 - f2;
  cout << "Difference of f1 and f2: " << f4.getX() << endl;
  Float f5 = f1 * f2;
  cout << "Product of f1 and f2: " << f5.getX() << endl;
  Float f6 = f1 / f2;
  cout << "Quotient of f1 and f2: " << f6.getX() << endl;
  return 0;
}
