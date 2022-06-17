//after overloding he operator it can be applied to an object in the same way as it is applied to the basic type

#include<iostream>

using namespace std;
class unaryFriend
{
private:
int a=10,b=20,c=30;

public:
void show()
{
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
}

void friend operator -(unaryFriend &u1);
};
void operator -(unaryFriend &u1)
{
u1.a=-u1.a;
u1.b=-u1.b;
u1.c=-u1.c;
//cout<<u1.a<<endl;
}
int main()
{
unaryFriend f1,f2;
cout<<"before overlodding: "<<endl;
f1.show();
cout<<"after overlodding: "<<endl;
-f1;
f1.show();
return 0;
}