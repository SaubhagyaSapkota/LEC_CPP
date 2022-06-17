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

        void operator - (){
            a = -a;
            b = -b;
            c = -c;
        }

        void display(){
            cout<<"value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
            cout<<"value of c: "<<c<<endl;
        }
};

int main(){
    unary un(10,20,30);
    un.display();
    -un;
    un.display();
    return 0;
}