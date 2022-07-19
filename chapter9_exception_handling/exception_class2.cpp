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
student()
{
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter marks: "<<endl;
    cin>>marks;
    cout<<"enter roll: "<<endl;
    cin>>roll;
    
    if (roll<0)
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
    student ();
}
catch(student::MARKS)
{
cout<<" Exception: marks enter more than full marks"<<endl;
}
catch(student::ROLL)
{
    cout<<" Exception: negative roll is entered.    "<<endl;
}
}