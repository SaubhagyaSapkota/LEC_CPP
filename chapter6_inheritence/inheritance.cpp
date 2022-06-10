#include<iostream>
using namespace std;

class account //base class 
{
public:
float salary =50000;

};
class programmer : public account{ //derive class 
public:
float bonus=2000;

};
int main()
{
    programmer p1;
    cout<<"salary:"<<p1.salary<<endl;
    cout<<"bonus:"<<p1.bonus<<endl;
    return 0;
}