#include <iostream>
using namespace std;

class person
{
protected:
    char name[50];
    int age;

public:
    person()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class reservation : public person
{
public:
    int rid;
    int rdate;

    reservation()
    {
        cout << "Enter the reservartion id : ";
        cin >> rid;
        cout << "Enter the reservation date : ";
        cin >> rdate;
    }

    void display()
    {
        person::display();
        cout << "Reservation id : " << rid << endl;
        cout << "Reservation date : 2022/03/" << rdate << endl;
    }
};

int main()
{
    reservation r;
    r.display();
    cout << "...........Thank U for your purchase.........";
}