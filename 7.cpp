#include <iostream>
using namespace std;
 
class area_cl
{
public:
    double height;
    double width;
};
 
class rectangle : public area_cl
{
public:
    // constructor to initialize height and width
    rectangle(double h, double w)
    {
        height = h;
        width = w;
    }
 
    // function to return the area of the rectangle
    double area()
    {
        return height * width;
    }
};
 
class isosceles : public area_cl
{
public:
    // constructor to initialize height and width
    isosceles(double h, double w)
    {
        height = h;
        width = w;
    }
 
    // function to return the area of the isosceles triangle
    double area()
    {
        return 0.5 * height * width;
    }
};
 
int main()
{
    rectangle r(2, 3);
    cout << "Area of the rectangle: " << r.area() << endl;
    isosceles t(3, 4);
    cout << "Area of the isosceles triangle: " << t.area() << endl;
    return 0;
}
