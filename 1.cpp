#include <iostream>
#include <cmath>
using namespace std;
 
// function to find the volume of a rectangle
double findVolume(double length, double width, double height) {
    return length * width * height;
}
 
// function to find the volume of a cylinder
double findVolume(double radius, double height) {
    return M_PI * radius * radius * height;
}
 
// function to find the volume of a cube
double findVolume(double side) {
    return side * side * side;
}
 
int main() {
    double l, w, h, r, rec_area, cyl_area, cub_area;
   
    cout << "Enter the length, width and height of rectangle: ";
    cin >> l >> w >> h;
    rec_area = findVolume(l, w, h);
   
    cout << "Enter the radius and height of cylinder: ";
    cin >> r >> h;
    cyl_area = findVolume(r, h);
   
    cout << "Enter the length of a side of a cube: ";
    cin >> l;
    cyl_area = findVolume(l);
   
    cout << "Volume of rectangle: " << rec_area << endl;
    cout << "Volume of cylinder: " << cyl_area << endl;
    cout << "Volume of cube: " << cyl_area << endl;
    return 0;
}
