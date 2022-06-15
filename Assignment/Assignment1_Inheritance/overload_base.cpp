#include<iostream>
using namespace std;
class base
{
    public:
    void display(char c)
    {
        cout<<"display() in Base with char argument"<<endl;
    }
    void display(int i)
    {
        cout<<"display() in base with int argument"<<endl;
    }
};
class derived: public base
{
    public:
    void display()
    {
        cout<<"display() in derived with out argument"<<endl;
    }
};
int main()
{
    derived d1;
    d1.display();//calls derived class display wihtout argument
    d1.display('a');//error::function will behidden after overridding
    d1.display(5);// error:: function will behidden after overridding
    d1.base::display('a');// calls base class display() with char argument
    d1.base::display(5);//calls base class display() with int arguemnt
    return 0;
}