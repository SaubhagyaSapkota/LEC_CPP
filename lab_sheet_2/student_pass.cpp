
#include<iostream>
using namespace std;
class StudentInfo
{
    private:
        char name[50];
        int roll;
        char address[50];
        float percentage;

   public:
        void input()
        {
                cout<<"Enter student name: "<<endl;
                cin>>name;
                cout<<"Enter roll: "<<endl;
                cin>>roll;
                cout<<"Enter address: "<<endl;
                cin>>address;
                cout<<"Enter student percentage: "<<endl;
                cin>>percentage;
        } 
        void display ()
        {
            cout<<"Student Name\t";
            cout<<"roll\t";
            cout<<"Adresss\t";
            cout<<"Result\n";
            cout<<"\t"<<name;
            cout<<"\t"<<roll;
            cout<<"\t"<<address;
            if (percentage>45){
                cout<<"\t"<<" Pass"<<endl;
            }
            else{
                cout<<"\t"<<" fail"<<endl;
            }
        }

};
int main()
{
    int n,i;
    StudentInfo s[n];
    cout<<"Enter the number of student: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       s[i].input();
    }
    for(i=1;i<=n;i++)
    {
       s[i].display();
    }
    return 0;
}