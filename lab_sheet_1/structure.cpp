//WAP in c++ to read the record of a student (name,address,roll) and display the record using structures in c++.

#include<iostream>
using namespace std;

struct student
{
    string name;
    string roll;
    string address;
};

int main(){
    student st;
    cout<<"Enter the info of student: "<<endl;
    cout<<"\nName: ";
    cin>>st.name;
    cout<<"\nRoll: ";
    cin>>st.roll;
    cout<<"\nAddress: ";
    cin>>st.address;
    cout<<"Displaying the info: "<<endl;
    cout<<"Name = "<<st.name<<endl;
    cout<<"Roll = "<<st.roll<<endl;
    cout<<"Address = "<<st.address<<endl;

    return 0;
}