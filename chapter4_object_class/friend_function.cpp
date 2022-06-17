// class and objects
//wap to show use of friend function 

#include<iostream>
using namespace std;

class myclass1
{
friend class myclass2;
private:

int x;
public:

myclass1(int a){
    x=a;

}
};

class myclass2
{
public :

myclass2(myclass1 obj){
    cout<<"the value of x is :"<<obj.x<<endl;
}
};
int main(){

    myclass1 obj1(5);
    myclass2 obj2(obj1);
}
