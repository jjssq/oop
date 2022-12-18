#include <iostream>
using namespace std;
 
class A
{
private:
    int x;
 
public:
    // constructor to initialize x
    A(int a){
        x = a;
    }
 
    // function to return x
    int getX() const
    {
        return x;
    }
};
 
class B
{
private:
    double y;
 
public:
    // constructor to initialize y
    B(double b){
        y = b;
    }
 
    // function to return y
    double getY() const
    {
        return y;
    }
};
 
int main()
{
    A a1(5);
    A a2(10);
 
    // find largest and smallest numbers between a1 and a2
    int min_a = min(a1.getX(), a2.getX());
    int max_a = max(a1.getX(), a2.getX());
    cout << "Largest number between a1 and a2: " << max_a << endl;
    cout << "Smallest number between a1 and a2: " << min_a << endl;
 
    return 0;
}
