#include <iostream>
using namespace std;

class person
{
protected:
    char name[100];
    int code;

public:
    void getData()
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
    void getData()
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
    void getData()
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
    void getData()
    {
        person::getData();
        account::getData();
        admin::getData();
    }
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
    master m, m1;
    cout << "Entering data for person ....." << endl;
    m.getData();
    cout << "Displaying data of person ........" << endl;
    m.display();
    cout << "Press 1 to update the data or 0 to exit";
    cin >> x;
    if (x == 1)
    {
        m1.updateData();
        m1.showData();
    }
    else
    {
        exit;
    }
    system("pause");
    
    return 0;
}