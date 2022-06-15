#include<iostream>
using namespace std;
class base
{
    // body of base class
    // no constructor
};
class dervied:public base{
    // body of derived 
    // no constructor
    public:
    void message()
    {
        cout<<"No constructor in base and derived class.";
    }
};
int main()
{
    dervied d;
    d.message();
    return 0;
}