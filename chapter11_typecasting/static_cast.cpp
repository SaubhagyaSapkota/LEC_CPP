#include<iostream>
using namespace std;

int main()
{
    int i;
    char c='c';

   // float f=3.14f;
    //i=f;
    i=c;
    cout<<"value of char is: "<<c<<endl;
    cout<<"value of converted integer is: "<<i<<endl;

    i= static_cast<int>(c);
    cout<<"value of integer is: "<<i<<endl;
}