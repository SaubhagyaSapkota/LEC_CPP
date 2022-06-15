#include<iostream>
using namespace std;
class person
{
    private:
    char name[25];
    char address[25];
    public:
    void getdata()
    {
        cout<<"\n Enter Name: ";
        cin>>name;
        cout<<"\n Enter Address: ";
        cin>>address;
    }
    void showdata()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Address"<<address;
    }
};
class employeee: public person
{
    private:
    int empID;
    float salary;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Enter employee ID";
        cin>>empID;
        cout<<"\n Enter salary:";
        cin>>salary;
    }
    void showdata()
    {
        person::showdata();
        cout<<"\n Employee ID"<<empID;
        cout<<"\nSalary:"<<salary;
    }
};
class manager: public employeee
{
    private:
    char hidegree;
    public:
    void getdata()
    {
        employeee::getdata();
        cout<<"Enter highest degree:";
        cin>>hidegree;
    }
    void showdata()
    {
        employeee::showdata();
        cout<<"\n Highest degree:"<<hidegree;
    }
};
int main()
{
    manager mgr;
    cout<<"\n Enter data on manager";
    mgr.getdata();
    cout<<"\n Data on Manager";
    mgr.showdata();
    return 0;
}