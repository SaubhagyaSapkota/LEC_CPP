// 1) overload binary operator with non member function

#include <iostream>
using namespace std;

class sum
{
private:
    int num1, num2;

public:
    sum(int a = 0, int b = 0)
    {
        num1 = a;
        num2 = b;
    }

    void display()
    {
        cout << "sum of num1's = " << num1 << endl;
        cout << "sum of num2's = " << num2 << endl;
    }

    friend sum operator+(sum s1, sum s2);
};

sum operator+(sum s1, sum s2)
{
    sum s3;
    s3.num1 = s1.num1 + s2.num1;
    s3.num2 = s1.num2 + s2.num2;
    return s3;
}

int main()
{
    sum s1(2, 2);
    sum s2(2, 2);
    sum s3 = s1 + s2;
    s3.display();
}