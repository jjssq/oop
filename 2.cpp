#include <iostream>
using namespace std;
 
class Time
{
private:
    int hours;
    int minutes;
 
public:
    // function to take input for time in hours and minutes
    void input()
    {
        cout << "Enter time in hours and minutes: ";
        cin >> hours >> minutes;
    }
 
    // function to add two times
    Time operator+(const Time &other)
    {
        Time sum;
        sum.minutes = minutes + other.minutes;
        sum.hours = hours + other.hours + sum.minutes / 60;
        sum.minutes %= 60;
        return sum;
    }
 
    // function to display the time in form hours:minutes
    void display() const
    {
        cout << hours << ":" << minutes << endl;
    }
};
 
int main()
{
    Time t1, t2, t3;
    t1.input();
    t2.input();
    t3 = t1 + t2;
    cout << "Sum of two time values (hours:minutes): ";
    t3.display();
    return 0;
}
