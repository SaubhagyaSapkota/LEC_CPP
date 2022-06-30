#include<iostream>
using namespace std;

class shape
{
protected:
int length, height;
public:
shape(int a=0, int b=0)
{
    length=a;
    height=b;
}
void area()
{
cout<<"the area of shape is:"<<endl;
}

};
class triangle: public shape
{
public:
triangle(int a, int b)
{
    length = a;
    height = b;
}
void area()
{
    cout<<"the area of triangle is:"<<(length*height)/2<<endl;
}
};
class rectangle: public shape
{
public:
rectangle(int a, int b)
{
    length = a;
    height = b;
}
int area()
{
    cout<<"the area of rectangle is:"<<(length*height)<<endl;
}
};
int main()
{
    shape *sph;
    shape sp(5,7);
    triangle tri(2,4);
    rectangle rec(8,4);

    sph = &sp;
    sph -> area();

    sph = &tri;
    sph -> area();

    sph = &rec;
    sph -> area();
}
 
