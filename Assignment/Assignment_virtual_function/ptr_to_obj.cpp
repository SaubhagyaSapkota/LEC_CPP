// accessing members of objects 

#include <iostream>
using namespace std;

class test 
{
    public:
    int data;
    test()
    {
        cout<<"constructor test () is called"<<endl;
        data = 55;
    }
    ~test()
    {
        cout<<"destructor ~test() is called"<<endl;
    }
    void show()
    {
        cout<<"data is "<<data<<endl;
    }
};

int main ()
{
    test *ptr;
    test tobj; // costructor is invoke here
    // store the address of statically created object tobj
    ptr=&tobj;
    cout<<"Accending object through tobj.show()..";
    tobj.show();
    cout<<"accending object through ptr->show()..";
    ptr->show();

    return 0;
    }