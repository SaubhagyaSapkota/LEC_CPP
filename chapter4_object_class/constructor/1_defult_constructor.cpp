#include<iostream>

using namespace std;

class constructor
{
public:
int a,b;
constructor(){
    cout<<"constructor is called:";
    a=10;
    b=20;

}
void display(){

    cout<<"\nSaubhagya Sapkota";
}
};

int main(){
    constructor c;

c.display();
    return 0;

}