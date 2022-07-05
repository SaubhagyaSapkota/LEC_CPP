// 2) overload unary operator with non member function

#include<iostream>
using namespace std;

class unary{
    private:
        int a,b,c;
    public:
        unary(int x, int y, int z){
            a=x;
            b=y;
            c=z;
        }

        void display(){
            cout<<"value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
            cout<<"value of c: "<<c<<endl;
        }

        friend void operator - (unary &n);
};

void operator - (unary &n)
    {
            n.a = -n.a;
            n.b = -n.b;
            n.c = -n.c;
        }


int main(){
    unary un(10,20,30);
    un.display();
    -un;
    un.display();
    return 0;
}