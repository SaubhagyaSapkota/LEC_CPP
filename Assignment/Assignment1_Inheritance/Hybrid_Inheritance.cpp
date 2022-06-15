#include<iostream>
using namespace std;
class person
{
    private:
    char name[25];
    int age;
    public:
    void getdata()
    {
        cout<<"\n Enter name:";
        cin>>name;
        cout<<"\n Enter age:";
        cin>>age;
    }
    void showdata()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age:"<<age;
    }
};
class exam
{
    protected:
    int marks1,marks2,marks3;
    public:
    void getdata()
    {
        cout<<"ENter marks in 3 subject:";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata()
    {
        cout<<"\n Marks in subject 1:"<<marks1;
        cout<<"\n Marks in subject 2:"<<marks2;
        cout<<"\n Marks in subject 3:"<<marks3;

    }
};
class student:public person
{
    private:
    int stuID;
    char stream[10];
    public:
    void getdata()
    {
        person::getdata();
        cout<<"\n Enter student ID:";
        cin>>stuID;
        cout<<"\n Enter stream name:";
        cin>>stream;
    }
    void showdata()
    {
        person::showdata();
        cout<<"\n Student ID:"<<stuID;
        cout<<"\n Stream: "<<stream;
    }
};
class result:public student,public exam
{
    private:
    int total;
    public:
    void getdata()
    {
        student::getdata();
        exam::getdata();
    }
    void showdata()
    {
        student::showdata();
        exam::showdata();
        total=marks1+marks2+marks3;
        cout<<"\n Total Marks="<<total;
        cout<<"\n PErcentage="<<static_cast<float>(total)/3;
    }
};
int main()
{
    result r;
    cout<<"Enter data for result"<<endl;
    r.getdata();
    cout<<"\n Data on student"<<endl;
    r.showdata();
    return 0;
}