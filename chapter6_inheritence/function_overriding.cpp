//function overriding 

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

};
int main()
{
    derive derive1;
    derive1.print();

    
    return 0;
}