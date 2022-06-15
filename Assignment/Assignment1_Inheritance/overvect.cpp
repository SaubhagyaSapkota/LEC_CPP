#include<iostream>
using namespace std;
const int MAX=5;
class vector1
{
    protected:
    int arr[MAX];
    int size;
    public:
    vector1()
    {
        size=0;
    }
    int &getset(int index)
    {
        return arr[index];
    }
    void additem(int num)
    {
        arr[size++]=num;
    }
    int removeitem()
    {
        return arr[--size];
    }
};
class vector2: public vector1
{
    public:
    void additem(int num)
    {
        if(size>=MAX)
        cout<<"Error:Vector is full."<<endl;
        else
        vector1::additem(num);
    }
    void removeitem()
    {
        if(size<=0)
        cout<<"Error:vector is empty"<<endl;
        else
        vector1::removeitem();
    }
};
int main()
{
    vector1 V2;
    V2.additem(1);
    V2.additem(2);
    V2.additem(3);
    V2.additem(4);
    V2.getset(2)=7;
    cout<<"Elements in the vector after adding:";
    for(int i=0;i<4;i++)
    cout<<V2.getset(i)<<" ";
    cout<<"\n Display elements by removing:";
    for(int i=0;i<4;++i)
    cout<<V2.removeitem()<<" ";
    return 0;

}