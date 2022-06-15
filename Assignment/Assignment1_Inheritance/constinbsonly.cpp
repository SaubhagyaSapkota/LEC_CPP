#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"default constructor from base";
    }
};
class derived:public base
{
    // body of derived
};
int main()
{
    derived d;
}