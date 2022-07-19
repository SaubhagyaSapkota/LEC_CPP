#include <iostream>
using namespace std;

class person
{
protected:
    char name[100];
    int code;

public:
    person()
    {
        cout << "Enter the name of the person . ";
        cin >> name;
        cout << "Enter the code of the person . ";
        cin >> code;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Code : " << code << endl;
    }
};

class account : virtual public person
{
protected:
    int pay;

public:
    account()
    {
        cout << "Enter the pay of the person .";
        cin >> pay;
    }

    void display()
    {
        cout << "Pay : " << pay << endl;
    }
};

class admin : virtual public person
{
protected:
    int exp;

public:
    admin()
    {
        cout << "Enter the experience of the person .";
        cin >> exp;
    }

    void display()
    {
        cout << "Experience : " << exp << endl;
    }
};

class master : public account, public admin
{
public:
    void display()
    {
        person::display();
        account::display();
        admin::display();
    }

    void updateData()
    {
        cout << "Enter the updated name : ";
        cin >> name;
        cout << "Enter the updated code : ";
        cin >> code;
        cout << "Enter the updated experience : ";
        cin >> exp;
        cout << "Enter the updated pay : ";
        cin >> pay;
    }

    void showData()
    {
        cout << "Name : " << name << endl;
        cout << "Code : " << code << endl;
        cout << "Experience : " << exp << endl;
        cout << "Pay : " << pay << endl;
    }
};

int main()
{
    int x;
    cout << "Entering data for person ....." << endl;
    master m;
    cout << "Displaying data of person ........" << endl;
    m.display();
    cout << "Press 1 to update the data or 0 to exit";
    cin >> x;
    if (x == 1)
    {
        m.updateData();
        m.showData();
    }
    else
    {
        exit;
    }
    system("pause");
    
    return 0;
}