#include<iostream>
using namespace std;

class student
{
    protected:
    string name;
    int marks ,roll;
public:
class MARKS{};
class ROLL{};
student(string n,int m, int r)
{
    name=n;
    marks=m;
    roll=r;
}
void check(){
    if (roll<1)
    {
    throw ROLL();
    }
    else if(marks >100)
    {
        throw MARKS();
    }
    else 
    {
        cout<<"name: "<<name<<endl;
        cout<<"roll: "<<roll<<endl;
        cout<<"marks: "<<marks<<endl;
    }
}
};     
 
int main()
{
try{
    student s("saubhagya",224,20);
    s.check();
}
catch(student::MARKS)
{
cout<<" marks enter more than fll marks"<<endl;
}
catch(student::ROLL)
{
    cout<<" negative roll is entered.    "<<endl;
}
}