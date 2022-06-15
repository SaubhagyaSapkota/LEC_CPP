#include<iostream>
using namespace std;
class employee
{
    private:
    char name[25];
    int empID;
    float salary;
    public:
    void getdata()
    {
        cout<<"\n Enter Name:";
        cin>>name;
        cout<<"\n Enter Employee ID:";
        cin>>empID;
        cout<<"\n Enter Salary:";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Employee ID:"<<empID;
        cout<<"\n Salary:"<<salary;
    }
};
class manager: public employee
{
    private:
    char hidegree[6];
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter highest degree obtained:";
        cin>>hidegree;
    }
    void showdata()
    {
        employee::showdata;
        cout<<"\n highest degree"<<hidegree;
    }
};
class secretary:public employee
{
    private:
    float height;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter height";
        cin>>height;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"\n height:"<<height;
    }
};
class teacher:public employee
{
    private:
    int nperiods;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"\nEnter the number of period allocated:";
        cin>>nperiods;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"\nNumber of periods allocated:"<<nperiods;
    }
};
int main()
{
    manager m;
    secretary s;
    teacher t;
    cout<<"\nEnter data on manager";
    m.getdata();
    cout<<"\n Enter data on secretary";
    s.getdata();
    cout<<"\n Enter data on teacher";
    t.getdata();
    cout<<"\nData on manager";
    m.showdata();
    cout<<"\nData on secretary";
    s.showdata();
    cout<<"\nData on teacher";
    t.showdata();
    return 0;
}