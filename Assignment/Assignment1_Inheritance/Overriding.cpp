#include<iostream>
using namespace std;
class base
{
    protected :
    int num;
    public:
    void readdata()
    {
        cout<<"Enter number in base: ";
        cin>>num;
    }
    void showdata()
    {
        cout<<"Number in base= "<<num<<endl;
    }
};
class derived: public base
{
    private:
    int num;
    public:
    void readdata()
    {
        cout<<"Enter the number in derived : ";
        cin>>num;
    }
    void showdata()
    {
        cout<<"Number in derived ="<<num<<endl;
    }
};
int main()
{
    derived d1;
    d1.readdata();
    d1.showdata();
    return 0;
}