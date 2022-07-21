#include<iostream>
using namespace std;

class base
{
public:
virtual void print()
{
    cout<<"base "<<endl;
}
};
class derive:public base{
    public:
void print()
{
    cout<<"devive 1"<<endl;
}
};
int main()
{
    base *bptr, bpt;
    derive *dptr,dpt;

    bptr= &dpt;
    dptr = dynamic_cast<derive *>(bptr);
    dptr -> print();

    if (dptr == nullptr)
    {
        cout<<"null pointer"<<endl;
    }else{
        cout<<"not null pointer"<<endl;
    }
    return 0;
}