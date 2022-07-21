#include<iostream>
using namespace std;
class student{
    int age;

    public:
        student(){
            age=25;
        }

        friend istream& operator >>(istream& input, student obj);
        friend ostream& operator <<(ostream& output, student obj);
};

//cin is object of istream so returning reference of istream
//1st param- passing the reference of istream
//2nd param- passing the reference of ostream
istream& operator >>(istream& input, student obj){
    input>>obj.age;
    return input;
}

//1st param- passing the reference of ostream
//2nd param- object of our own class i.e. student class
ostream& operator <<(ostream& output, student obj){
    output<<obj.age;
    return output;
}

int main(){
    student s;
    cout<<s;
    cin>>s;
    cout<<s; //prints 25
    return 0;
}