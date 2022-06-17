//after overloding he operator it can be applied to an object in the same way as it is applied to the basic type

#include<iostream>

using namespace std;
class count
{
private:
int value;
public:
count ()
{
value=5;
}
// for prefix
void operator++()
{
    value++;
}
//for postfix
void operator++(int)
{
    value++;
}
void dislay()
{
    cout<<"Count: "<<value<<endl;
}
};

int main()
{
count c1;
//for prefix increment
++c1;
c1.dislay();

//for postfix incremient
c1++;
c1.dislay();

return 0;
}