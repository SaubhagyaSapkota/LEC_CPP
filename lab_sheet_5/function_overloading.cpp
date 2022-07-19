#include <iostream>
#include <math.h>
using namespace std;

class Area
{
public:
    void calcArea(float length)
    {
        cout << "The area of square is " << length * length << endl;
    }
    void calcArea(float length, float breadth)
    {
        cout << "The area of rectangle is " << length * breadth << endl;
    }

    void calcArea(double a, double b, double c)
    {
        double s, area;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The area of triangle is " << area << endl;
    }
};

int main()
{
    Area a;
    a.calcArea(1.1, 2.2, 2.2);
    a.calcArea(5.5, 6.6);
    a.calcArea(9.9);
    return 0;
}