// q. WAP in C++ to read the record of five students. Include their name, adress and roll.no and display them using structure

#include <iostream>

using namespace std;

struct student
{
    char name[10];
    char address[15];
    char roll[15];
} st[5];

int main()
{
    cout << "Enter the information of students: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << "Enter name: ";
        cin >> st[i].name;
        cout << "Enter address: ";
        cin >> st[i].address;
        cout << "Enter Roll No : ";
        cin >> st[i].roll;
    }
    cout << "Output" << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << " Name: " << st[i].name;
        cout << "\n Address: " << st[i].address;
        cout << "\n Roll No: " << st[i].roll;
    }
    return 0;
}