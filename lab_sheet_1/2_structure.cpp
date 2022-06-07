#include<iostream>
#include<math.h>
using namespace std;
class studentDetail
{
    private:
    struct student
     {
      string name;
      int roll;
      string adress;
     }std;
    public:
    void input()
    {
    cout<<"Enter the information of student:"<<endl;
    cout<<"Name:"<<endl;
    cin>>std.name;
    cout<<"Roll:"<<endl;
    cin>>std.roll;
    cout<<"Adress:"<<endl;
    cin>>std.adress;
    }
    void display()
    {
        cout<<"Displaying the info:"<<endl;
    cout<<"NAME\t\t";
    cout<<"ROLL\t";
    cout<<"Adress\t"<<endl;
    cout<<""<<std.name;
    cout<<"\t"<<std.roll;
    cout<<"\t"<<std.adress<<endl;
    }


};
int main()
{
    studentDetail s1;
    s1.input();
    s1.display();
}