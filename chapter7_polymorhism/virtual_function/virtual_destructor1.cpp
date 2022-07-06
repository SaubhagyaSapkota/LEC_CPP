#include<iostream>
using namespace std;

class base
{
    public:
    base()
        {
            cout<<"this is base constructor"<<endl;
        }
        /*virtual void display()
        {
            cout<<"display of constructor"<<endl;
        }*/
        
   virtual ~base()
        {
            cout<<"this is base destructor"<<endl;
        }
    
};
class derive:public base
{
    public:
    derive()
        {
            cout<<"this is derive constructor"<<endl;
        }
~derive()
        {
            cout<<"this is derive destructor"<<endl;
        }

};

int main()
{
    base *b;
    b= new derive;
   // b->display();
    delete b;
    return 0;
  
}
