//WAP to define a class Time that has 3 data members for hours, minutes and second.

#include<iostream>
using namespace std;

class Time{
    private:
        int hr,min,sec;
    public:
        void gettime(){
            cout<<"Enter time: "<<endl;
            cout<<"\nEnter the hour: ";
            cin>>hr;
            cout<<"\nEnter minute: ";
            cin>>min;
            cout<<"\nEnter second: ";
            cin>>sec;
        }
        void sum(Time one, Time two){
            this -> sec = one.sec+two.sec;
            this -> hr = one.hr+two.hr+(this -> min/60);
            this -> min = one.min+two.min+(this -> sec/60);
            this->min %=60;
            this->sec %=60;
        }
        void display(){
            cout<<"The resultant time is: "<<hr<<":"<<min<<":"<<sec<<endl;
        }
};

int main(){
    Time t1,t2,add;
    t1.gettime();
    t2.gettime();
    add.sum(t1,t2);
    add.display();
}