// wap to calculate area and volume of a room

#include<iostream>

using namespace std;

class room
{
private:
    /* data */
public:
    int length , breadth, height ;

    int calculate_area (int length, int breadth){

        return length*breadth;
    }

    int calculate_volume (int length, int breadth, int height){

        return length*breadth*height;
    }


};

int main (){
    room room_1;
int length, breadth, height;

    cout<<"Enter the lenght: ";
    cin>>length;
    cout<<"Enter the breadth:";
    cin>>breadth;
    cout<<"enter the height:";
    cin>>height;

    cout<<"the area of room is :" <<room_1.calculate_area(length,breadth)<<endl;
    cout<<"the volume of room is :"<<room_1.calculate_volume(length,breadth,height)<<endl;

}

