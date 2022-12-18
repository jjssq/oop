#include <iostream>
using namespace std;
 
class Complex
{
private:
    double real;
    double imaginary;
 
public:
    // constructor to initialize real and imaginary
    Complex(double r, double i) : real(r), imaginary(i) {}
 
    // default constructor
    Complex(){};
 
    // function to display complex numbers
    void show() const
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
 
    // function to add two complex numbers
    Complex operator+(const Complex &other)
    {
        Complex sum;
        sum.real = real + other.real;
        sum.imaginary = imaginary + other.imaginary;
        return sum;
    }
};
 
int main()
{
    Complex c1(2, 3);
    Complex c2(1, 2);
    Complex c3 = c1 + c2;
    cout << "Sum of c1 and c2: ";
    c3.show();
    return 0;
}
