#include <iostream>

using namespace std;

class student{

    public:
    double marks;

    student (double m){

        marks = m;
    }
   

};

 void calculate_avg(student s1, student s2){
double average;
average = (s1.marks+s2.marks);
cout<<"the average marks is :"<<average<<endl;
     
    };

    int main(){

        student s1(50),s2(60);
        calculate_avg(s1,s2);
        
    }