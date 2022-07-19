#include<iostream>
using namespace std;

class Vector
{
    private:
    float x,y,z;

    public:
    friend Vector operator +(Vector x,Vector y);
    void getData()
    {
        cout<<"Enter x component : ";
        cin>>x;
        cout<<"Enter y component : ";
        cin>>y;
        cout<<"Enter z component : ";
        cin>>z;
    }
    void display()
    {
        cout<<x<<"i + "<<y<<"j + "<<z<<"k"<<endl;
    }
};

Vector operator +(Vector v1,Vector v2)
{
    Vector sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;
    return sum;
}

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