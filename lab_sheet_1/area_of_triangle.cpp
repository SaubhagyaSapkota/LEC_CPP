// WAP to compute the area of a traingle

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, s, area;
    cout<<"Enter the length of first side: "<<endl;
    cin>>a;
    cout<<"Enter the length of second side: "<<endl;
    cin>>b;
    cout<<"Enter the length of third side: "<<endl;
    cin>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is: "<<area<<endl;
}