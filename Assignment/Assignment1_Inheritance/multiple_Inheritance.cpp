#include<iostream>
using namespace std;
class student
{
    private:
    char name[25];
    int studID;
    public:
    void getdata()
    {
        cout<<"\n Enter Name: ";
        cin>>name;
        cout<<"\nEnter STudent ID:";
        cin>>studID;
    }
    void showdata()
    {
        cout<<"\nName:"<<name<<endl;
        cout<<"\nStudent ID:"<<studID;
    }
};
class employee
{
    private:
    char org_name[25];
    int empID;
    public:
    void getdata()
    {
        cout<<"ENter NAme of associated Oraganixation: ";
        cin>>org_name;
        cout<<"\nEmployee ID: ";
        cin>>empID;
    }
    void showdata()
    {
        cout<<"\n Name of associated student union: "<<org_name;
        cout<<"\n Employee ID: "<<empID;
    }
};
class marketing_officer:public student,public employee
{
    private:
    int working_hour;
    public:
    void getdata()
    {
        student::getdata();
        employee::getdata();
        cout<<"Enter working hours: ";
        cin>>working_hour;
    }
    void showdata()
    {
        student::showdata();
        employee::showdata();
        cout<<"\nWorking hours: "<<working_hour;
    }
};
int main()
{
    marketing_officer moff;
    cout<<"ENter the data of marketing officer"<<endl;
    moff.getdata();
    cout<<"\n Data of marketing officer"<<endl;
    moff.showdata();
    return 0;

}