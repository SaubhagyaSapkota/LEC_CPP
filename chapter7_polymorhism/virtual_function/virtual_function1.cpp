#include<iostream>
using namespace std;

class animal
{
    public:
virtual void move()=0;
virtual void eat();


};
class dog:public animal
{
    public:
 void move()
{
    cout<<"dogs runs"<<endl;
}
void eats()
{
    cout<<"dogs eats"<<endl;
}
};

int main()
{
    animal *an;
    dog dg;
    an = &dg;
    an-> move();
    an->eat();
    return 0;
}