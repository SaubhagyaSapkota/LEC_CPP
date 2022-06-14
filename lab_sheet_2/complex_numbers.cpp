// WAP to add two complex numbers passing object as an argument and returning resultant complex number.
#include<iostream>
using namespace std;

class complex{
    private: 
    float real;
    float imag;
    public:
    void getvalue()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
    
    complex add(complex c1, complex c2)
    {
        complex result;
       result.real = c1.real+c2.real;
       result.imag = c1.imag+c2.imag;
       return result;
    }
     void display(complex result)
     {
         cout<<"Sum of complex number : " << result.real << " + i"<< result.imag;

     }

};
int main()
{
    complex com1, com2, com3;
    cout<<"Enter first complex no.:\n";
    com1.getvalue();
    cout<<"Enter second complex no.:\n";
    com2.getvalue();
    com3.display(com3.add(com1,com2));com3.add(com1,com2);
    


}