// wap to show destructor

#include<iostream>

using namespace std;

class helloworld
{
    public:
    helloworld(){
        cout<<"Constructor is called"<<endl;
    }
    ~helloworld(){

        cout<<"destructor is called"<<endl;
    }

    void display(){
        cout<<"hello world"<<endl;
    }


};

int main(){

    helloworld obj;
    obj.display();

}

