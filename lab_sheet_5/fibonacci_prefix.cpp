#include<iostream>
using namespace std;

class increment
{
    public:
    int a = 0;
    int b = 1;
    int temp;

    void operator ++()
    {
        temp=b;
        b=a+b;
        a=temp;
    }
    
    void display()
    {
        cout<<"\t";
        cout<<b;
    }
};


int main()
{
    int no;
    cout<<"Enter the no of terms to be shown by Fibonacci series : ";
    cin>>no;
    increment obj;
    cout<<"Fibonacci series......"<<endl;
    cout<<obj.a<<"\t";
    cout<<obj.b;
    for(int i=2;i<no;i++)
    {
        ++obj;
        obj.display();
    }
}