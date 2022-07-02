#include<iostream>
using namespace std;

class point
{
    public:
virtual void draw()
{
    cout<<"point"<<endl;
}
};
class line:public point
{
    public:
 void draw()
{
    cout<<"line"<<endl;
}
};
class triangle:public point
{
    public:
 void draw()
{
    cout<<"triangle"<<endl;
}
};
class polygon:public point
{
    public:
 void draw()
{
    cout<<"polygon"<<endl;
}
};
class circle:public point
{
    public:
 void draw()
{
    cout<<"circle"<<endl;
}
};

int main()
{
    point pt;
    line ln;
    triangle tr;
    polygon py;
    circle cr;

    point *baseptr[]={&pt,&ln,&tr,&py,&cr};
    cout<<"figure drawn by base pointer are:"<<endl;
    for(int i=0;i<5;i++)
    baseptr[i]->draw();

    return 0;
}