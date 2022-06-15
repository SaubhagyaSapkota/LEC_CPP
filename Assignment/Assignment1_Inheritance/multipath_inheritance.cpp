#include<iostream>
using namespace std;
class student
{
    protected:
    int stuID;
    char name[25];
    public:
    void getstdata()
    {
        cout<<"\nEnter student ID:";
        cin>>stuID;
        cout<<"\nEnter student name:";
        cin>>name;
    }
    void showstdata()
    {
        cout<<"\nStudent ID:"<<stuID;
        cout<<"\nSTudent name:"<<name;
    }
};
class internalexam: virtual public student
{
    protected:
    int marks1,marks2,marks3;
    public:
    void getdata()
    {
        cout<<"ENter internal marks in 3 subject:";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata()
    {
        cout<<"\n Marks in subject 1:"<<marks1;
        cout<<"\n Marks in subject 2:"<<marks2;
        cout<<"\n Marks in subject 3:"<<marks3;

    }
    int totinternalmarks()
    {
        return(marks1+marks2+marks3);
    }
};
class ExternalExam: virtual public student
{
    protected:
    int marks1,marks2,marks3;
    public:
    void getdata()
    {
        cout<<"ENter external marks in 3 subject:";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata()
    {
        cout<<"\n Marks in subject 1:"<<marks1;
        cout<<"\n Marks in subject 2:"<<marks2;
        cout<<"\n Marks in subject 3:"<<marks3;

    }
    int totexternalmarks()
    {
        return(marks1+marks2+marks3);
    }
};
class result: public internalexam, public ExternalExam
{
    public:
    void getdata()
    {
        internalexam::getdata();
        ExternalExam::getdata();
    }
    void showdata()
    {
        internalexam::showdata();
        ExternalExam::showdata();
    }
    int totalMarks()
    {
        return(totinternalmarks()+totexternalmarks());
    }
};
int main()
{
    result r;
    cout<<"Enter data for student"<<endl;
    r.getstdata();
    cout<<"\nENter marks"<<endl;
    r.getdata();
    cout<<"\n Data for student is:"<<endl;
    r.showdata();
    cout<<"\n Total Marks="<<r.totalMarks();
    return 0;
}