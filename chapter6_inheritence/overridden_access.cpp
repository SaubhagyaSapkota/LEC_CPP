//overridden access

#include<iostream>
using namespace std;

class base //base class 
{
public:
void print()
{
    cout<<"base function."<<endl;
}

};
class derive : public base{ //derive class 
public:
void print(){
    cout<<"derive function."<<endl;
}

// first method
// base::print();

};
int main()
{
    derive derive1,derive2;
    derive1.print();
//second method
    derive2.base::print();
    return 0;
}