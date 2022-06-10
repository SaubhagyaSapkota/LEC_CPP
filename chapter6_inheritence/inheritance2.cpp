#include<iostream>
using namespace std;

class animal //base class 
{
public:
void eat()
{
    cout<<"eating...."<<endl;
}

};
class dog : public animal{ //derive class 
public:
void bark(){
    cout<<"barking..."<<endl;
}

};
int main()
{
    dog d1;
    animal a1;
    a1.eat();
    d1.bark();
    d1.eat();
    return 0;
}