#include<iostream>

using namespace std;

class iteminfo
{
private:
    int itemid;
    float cost;
public:

void setdata(int id , float cst ){

    itemid=id;
    cost=cst;

}

void showdata(){
    cout<<"\n item ID:"<<itemid;
    cout<<"\n cost:"<<cost<<endl;
}
   
};

int main(){

    iteminfo i1,i2;
    i1.setdata(55,35.50);
    i2.setdata(555,135.25);

    cout<<"\nInfo on first item";
    i1.showdata();

    cout<<"\nInfo on second item";
    i2.showdata();

    return 0;

}


