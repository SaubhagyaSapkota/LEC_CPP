#include<iostream>
using namespace std;

class Vector
{
    private:
    float x,y,z;

    public:
    void getData()
    {
        cout<<"Enter x component : ";
        cin>>x;
        cout<<"Enter y component : ";
        cin>>y;
        cout<<"Enter z component : ";
        cin>>z;
    }

    Vector operator +(Vector v)
{
    Vector sum;
    sum.x=x+v.x;
    sum.y=y+v.y;
    sum.z=z+v.z;
    return sum;
}

    void display()
    {
        cout<<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
    }
};

int main()
{
    Vector v1,v2,v3;
    v1.getData();
    v2.getData();
    cout<<"The first vector is ";
    v1.display();
    cout<<"The second vector is ";
    v2.display();
    v3 = v1+v2;
    cout<<"The sum of vectors is ";
    v3.display();
}