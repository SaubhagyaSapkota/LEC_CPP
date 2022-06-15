#include<iostream>
using namespace std;
class student 
{
    private:
    char name[50];
    int stuID;
    public:
    void getdata()
    {
        cout<<"\n Enter Name:";
        cin>>name;
        cout<<" Enter Student ID: ";
        cin>>stuID;
    }
    void showdata()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Student ID:"<<stuID;
    }
};
class leader: public student
{
    private:
    char union_name[25];
    public:
    void getdata()
    {
        student::getdata();
        cout<<"Enter Name of associated student union: ";
        cin>>union_name;
    }
    void showdata()
    {
        student::showdata();
        cout<<"\n Name of associated student union: "<<union_name;
    }
};
int main()
{
    leader led;
    cout<<"Enter data on leader of student union"<<endl;
    led.getdata();
    cout<<"\n Data on leader of student union"<<endl;
    led.showdata();
    return 0;
}