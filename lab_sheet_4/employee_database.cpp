#include <iostream>
using namespace std;

// Here staff is a base class of an institution,
//  all employees have their unique code and name

class staff
{
protected:
    int code;
    string name;

public:
    void getData()
    {
        cout << "Enter the code of the employee : ";
        cin >> code;
        cout << "Enter the name of the employee : ";
        cin >> name;
    }

    void display()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};


// staff type : teacher
// characterstics : subject & publication of their subject content

class teacher : public staff
{
protected:
    string subject;
    string publication;

public:
    void getData()
    {
        staff::getData(); 
        // Acessing getdata() function of staffs as a teacher + their unique data
        cout << "Enter the subject taught by the teacher : ";
        cin >> subject;
        cout << "Enter the publication of the subject's content : ";
        cin >> publication;
    }

    void display()
    {
        staff::display();
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};

// Staff type : Graded officer
class officer : public staff
{
protected:
    int grade;

public:
    void getData()
    {
        staff::getData();
        cout << "Enter the grade of the officer : ";
        cin >> grade;
    }

    void display()
    {
        staff::display();
        cout << "Grade: " << grade << endl;
    }
};

// // Staff type : Typist (1.regular, 2.casual)
class typist : public staff
{
protected:
    int speed;

public:
    void getData()
    {
        staff::getData();
        cout << "Enter the speed of the typist (in wpm): ";
        cin >> speed;
    }

    void display()
    {
        staff::display();
        cout << "Speed: " << speed << endl;
    }
};

class regular : public typist
{
public:
    void getData()
    {
        typist::getData();
    }

    void display()
    {
        typist::display();
    }
};

class casual : public typist
{
protected:
    int  wages;

public:
    void getData()
    {
        typist::getData();
        cout << "Enter the daily wages of typist : ";
        cin >> wages;
    }

    void display()
    {
        typist::display();
        cout << "Daily Wages : " << wages << endl;
    }
};

int main()
{
    char a, b;
    teacher t;
    officer o;
    regular r;
    casual c;

    cout << "---teacher's data--- : " << endl;
    t.getData();
    cout << "---officer's data--- : " << endl;
    o.getData();
    cout << "---regular typist's data--- : " << endl;
    r.getData();
    cout << "---casual typist's data--- : " << endl;
    c.getData();

    cout << "Enter 't', 'o'  or 'p'to show data for teacher, officer or typist respectively : ";
    cin >> a;
    if (a == 't')
    {
      cout << "---teacher's data--- : " << endl;
        t.display();
    }
    if (a == 'o')
    {
        cout << "---officer's data--- : " << endl;
        o.display();
    }
    if (a == 'p')
    {
        cout << "Enter r for regular and c for casual : ";
        cin >> b;
        if (b == 'r')
        {
            cout << "---regular typist's data--- : " << endl;
            r.display();
        }
        if (b == 'c')
        {
             cout << "---casual typist's data--- : " << endl;
            c.display();
        }
    }
}
