//overridden access

#include<iostream>
using namespace std;

class base //base class 
{
public:
base()
{
    cout<<"constctor of base"<<endl;
}
~base(){
    cout<<"destructor of base"<<endl;
}

};
class derive : public base{ //derive class 
public:
derive(){
    cout<<"constctor of derive"<<endl;
}
~derive(){
    cout<<"destructor of derive"<<endl;
}


};
int main()
{
   derive d1;
   
    return 0;
}