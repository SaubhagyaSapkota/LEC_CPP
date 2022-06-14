#include<iostream>
using namespace std;
 
class B;
class A
{
    private:
    int a;
    public:
    void getvalue()
    {
        cout<<"Enter value of a:"<<endl;
        cin>>a;
    }
    friend void value(A obja, B objb);
};
class B{
    private:
    int b;
    public:
    void getvalue()
    {
        cout<<"ENter value of b:"<<endl;
        cin>>b;
    }
    friend void value(A obja, B objb);
};
void value(A obja, B objb)
{
   cout<<"The sum is:"<<obja.a+objb.b<<endl;
}
int main()
{
    A objecta;
    B objectb;
    objecta.getvalue();
    objectb.getvalue();
    value(objecta, objectb);
    
}