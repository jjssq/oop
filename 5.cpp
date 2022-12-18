#include <iostream>
#include <vector>
using namespace std;
 
class Vector
{
private:
    vector<double> v;
 
public:
    // constructor to initialize the vector
    Vector(int size)
    {
        v = vector<double>(size);
    }
 
    // function to add the values of two vectors
    Vector operator+(const Vector &other)
    {
        Vector sum(v.size());
        for (int i = 0; i < v.size(); i++)
        {
            sum.v[i] = v[i] + other.v[i];
        }
        return sum;
    }
 
    // function to modify the value of a given element
    void modify(int index, double value)
    {
        v[index] = value;
    }
 
    // function to display the vector in the form (ai + bj + ck)
    void display() const
    {
        cout << "(";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "i";
            if (i != v.size() - 1)
            {
                cout << " + ";
            }
        }
        cout << ")" << endl;
    }
};
 
int main()
{
    Vector v1(3);
    v1.modify(0, 1);
    v1.modify(1, 2);
    v1.modify(2, 3);
 
    cout << "Vector 1: ";
    v1.display();
 
    Vector v2(3);
    v2.modify(0, 4);
    v2.modify(1, 5);
    v2.modify(2, 6);
 
    cout << "Vector 2: ";
    v2.display();
 
    Vector v3 = v1 + v2;
    cout << "Sum of v1 and v2: ";
    v3.display();
    return 0;
}
