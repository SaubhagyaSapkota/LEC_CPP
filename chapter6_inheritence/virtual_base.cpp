#include<iostream>
using namespace std;
class A
{
    public:
void displaya()
{
    int a=50;
    cout<<"the value of a:"<<a<<endl;
}
};
class B: public virtual A
{
public:
void displayb()
{
    int b=60;
    cout<<"the value of b:"<<b<<endl;
}
};
class C: public virtual A
{
public:
void displayc()
{
    int c=70;
    cout<<"the value of c:"<<c<<endl;
}
};
class D: public B,public C
{
public:
void displayd()
{
    int d=80;
    cout<<"the value of d:"<<d<<endl;
}
};
int main()
{
D d1;
d1.displaya();
d1.displayb();
d1.displayc();
d1.displayd();
}