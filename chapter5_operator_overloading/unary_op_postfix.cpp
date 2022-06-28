#include<iostream>
using namespace std;

class count{
    private:
        int value;
    public:
        count(){
            value = -5;
        }

        void operator ++(int){
            ++value;
        }

        void display(){
            cout<<"The value of 'value' is: "<<value<<endl;
        }
};

int main(){
    count x;
    x.display();
    x++;
    x.display();
}