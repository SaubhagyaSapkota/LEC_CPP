#include<iostream>
using namespace std;
class baseone
{
    public:
    void display()
    {
        cout<<"I am from baseone"<<endl;
    }
};
class basetwo
{
    public:
    void display()
    {
        cout<<"I am from basetwo"<<endl;
    }
    
};
class derived:public baseone, public basetwo
{
    public:
    void drvdisplay()
    {
        display();//error :ambigous,which display to call
        baseone::display();//ok
        basetwo::display();//ok
    }
};
int main()
{
    derived der;
    der.display();//error:ambigous,which  to call
    der.baseone::display();
    der.basetwo::display();
}