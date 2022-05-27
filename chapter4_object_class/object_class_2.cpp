// wap to calculate area and volume of a room

#include<iostream>

using namespace std;

class room
{
private:

double length , breadth, height ;
    
public:
    double setvalue(double len, double bth, double hei) {
length = len;
breadth = bth;
height = hei;

    }

    double calculate_area (double length, double breadth){

        return length*breadth;
    }

    double calculate_volume (double length, double breadth, double height){

        return length*breadth*height;
    }


};

int main() {

room room_1;

double length, breadth, height;
   /* cout<<"Enter the lenght: ";
    cin>>length;
    cout<<"Enter the breadth:";
    cin>>breadth;
    cout<<"enter the height:";
    cin>>height;*/

    room_1.setvalue(42.5, 30.8, 19.2);

    cout<<"the area of room is :" <<room_1.calculate_area()<<endl;
    cout<<"the volume of room is :"<<room_1.calculate_volume()<<endl;

}

