#include<iostream>

using namespace std;

class A
{
public:
    int a = 50;

    void display()
    {
        cout<<"output of A:"<<a<<endl;
    }
};
int main()
{
A a1,a2,a3;
a3= a1 + a2;

}

