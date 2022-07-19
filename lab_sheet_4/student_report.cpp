#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int roll;

public:
    void getData()
    {
        cout << "Enter the name of the student : ";
        cin >> name;
        cout << "Enter the roll no of the student : ";
        cin >> roll;
    }

    void display()
    {
        cout << "Name : " << name;
        cout << "Roll no : " << roll;
    }
};

class test : public student
{
protected:
    int math;
    int eng;

public:
    void getData()
    {
        student::getData();
        cout << "Enter the marks obatined in maths : ";
        cin >> math;
        cout << "Enter the marks obtained in english : ";
        cin >> eng;
    }

    void display()
    {
        student::display();
        cout << "Marks obtained in maths : " << math;
        cout << "Marks obtained in english : " << eng;
    }

    int Total()
    {
        return (math + eng);
    }
};

class sport
{
protected:
    int score;

public:
    void getData()
    {
        cout << "Enter your score : ";
        cin >> score;
    }

    void display()
    {
        cout << "Score in sport : " << score;
    }

    int sportTotal()
    {
        return score;
    }
};

class result : public test, public sport
// inheriting both classes
{
public:
    void getData()
    {
        test::getData();
        sport::getData();
    }

    void display()
    {

        cout << "Total score is : " << Total() + sportTotal();
    }
};

int main()
{
    result r;
    cout << "Enter the data of the student :" << endl;
    r.getData();
    cout <<"......Displaying Student's Data........... " << endl;
    r.display();
    return 0;
}