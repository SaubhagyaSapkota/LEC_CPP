#include<iostream>
using namespace std;

class binary
{
private:
int a,b;

public:
binary()
{
    a=0;
    b=0;
}
binary(int c,int d)
{
a=c;
b=d;
}
binary operator +(binary b1)
{
    binary b2;
    cout<<"value of b2 a inside overloading fncion:"<<b2.a<<" "<<b1.a<<endl;
    cout<<"value of b2 a inside overloading fncion:"<<b2.b<<" "<<b1.b<<endl;
    //calling object is passed implicitly and second object is passed through argment
    b2.a=a+b1.a;
    b2.b=b+b1.b;
return b2;
}
void dislay(){
    cout<<"the value of a and b is:"<<a<<" "<<b<<endl;
}
};
int main()
{
binary bb1,bb2,bb3;
bb1=binary(2,4);
bb2=binary(5,8);
bb3=bb1+bb2;
bb1.dislay();
bb2.dislay();
bb3.dislay();

}