#include<iostream>
using namespace std;

int const MAX = 4;
template<class T>
class stack
{
    private:
    T arr[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(T data)
    {
        arr[++top]=data;
    }
    T pop ()
    {
        return arr[top--];
    }
    int size()
    {
        return (top+1);
    }
};
int main()
{
cout<<"stack for integer data type"<<endl;
stack<int> s1;
cout<<"size of stack: "<<s1.size()<<endl;
s1.push(1);
s1.push(2);
s1.push(3);
cout<<"size of stack: "<<s1.size()<<endl;
cout<<"numbered popped: "<<s1.pop()<<endl;
cout<<"numbered popped: "<<s1.pop()<<endl;
cout<<"size of stack: "<<s1.size()<<endl;
cout<<"numbered popped: "<<s1.pop()<<endl;
cout<<"size of array: "<<s1.size()<<endl;
return 0;
}
