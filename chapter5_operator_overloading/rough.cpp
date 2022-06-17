#include<iostream>

using namespace std;
class rough
{
public:
int a=1;

};

int main()
{
rough r;

cout <<"primitive type increment"<< r.a++ <<endl;
cout <<"user define type increment"<<r++<<endl;
}