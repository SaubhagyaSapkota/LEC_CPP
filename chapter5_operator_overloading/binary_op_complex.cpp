// complex sum using operator overloading
#include<iostream>
using namespace std;

class complex{
    private:
        float real, imag;
    public:
        complex(){
            imag = 0;
            real = 0;
        }
        // complex(float real, float imag){
        //     this->real = real;
        //     this->imag = imag;
        // }
        void getdata(){
            cout<<"Enter real part: "<<endl;
            cin>>real;
            cout<<"Enter imag part: "<<endl;
            cin>>imag;
        }

        complex operator + (complex &c1){
            complex temp;
            cout<<real<<endl; //real value of object c1 is printed.
            cout<<imag<<endl; //imag value of object c1 is printed.
            temp.real=real+c1.real;
            temp.imag=imag+c1.imag;
            return temp;
        }

        void display(){
            cout<<"The sum of the complex numbers is : "<<real<<"+ i"<<imag<<endl;
        }
};

int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c1+c2;
    c3.display();

    return 0;
}