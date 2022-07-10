#include<iostream>
using namespace std;

template<class T>
class Calculator{
    private:
        T num1, num2;
    public:
        Calculator(T n1, T n2){
            num1 = n1;
            num2 = n2;
        }
        void display_result(){
            cout<<"Numbers are: "<<num1<<"and "<<num2<<"."<<endl;
            cout<<"Addition is: "<<add()<<endl;
            cout<<"Substraction is: "<<sub()<<endl;
            cout<<"Product is: "<<mul()<<endl;
            cout<<"Division is: "<<div()<<endl;
        }

        T add(){
            return num1+num2;
        }
        T sub(){
            return num1-num2;
        }
        T mul(){
            return num1*num2;
        }
        T div(){
            return num1/num2;
        }
};

int main(){
    Calculator<int> intCalc(2,1);
    Calculator<float> floatcalc(2.1,3.3);

    cout<<"Int results: "<<endl;
    intCalc.display_result();
    cout<<"Float results: "<<endl;
    floatcalc.display_result();
    return 0;
}