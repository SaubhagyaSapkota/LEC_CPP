#include<iostream>
using namespace std;

int main()
{
int *pointInt;
float *pointFloat;

pointInt = new int;
pointFloat = new float;

cout<<"address of pointInt"<<pointInt<<endl;
cout<<"address of pointFloat"<<pointFloat<<endl;

*pointInt = 45;
*pointFloat = 5.7;


cout<<"value of pointInt"<<*pointInt<<endl;
cout<<"value of pointFloat"<<*pointFloat<<endl;

delete pointInt;
delete pointFloat;
return 0;
}