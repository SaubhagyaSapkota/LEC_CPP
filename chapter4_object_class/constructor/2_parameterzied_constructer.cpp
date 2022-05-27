// c++ program t aalculate the area of the wall

#include<iostream>

using namespace std;

class wall
{
    private:
    int length;
    int height;

    public:

    wall (double  len , double hgt){

        length= len;
        height = hgt;

    }   

    wall (wall &obj){

        length = obj.length;
        height = obj.height;

    }   

    double calculateArea(){

        return length * height;
    }                                                                                                                                                                                                                                                                                                                                                                                                                  

};

int main(){

    wall wall1(10.5, 8.6);

    cout<< "Area of wall 1: "<< wall1.calculateArea() <<endl;

    wall wall2(5.2,6.3);

    cout << "Area of wall 2:"<< wall2.calculateArea()<<endl;

    return 0;


};