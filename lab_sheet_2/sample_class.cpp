#include<iostream>
using namespace std;

class Sample
{
    friend float mean(Sample);
    private:
    float value1, value2, Mean;
    public:
    void getdata()
    {
        cout<<"Enter value 1:";
        cin>>value1;
        cout<<"Enter value 2:";
        cin>>value2;
    }
    float mean(Sample obj){
        return float(obj.value1+obj.value2)/2;
    }


};
int main()
{
    Sample obj;
    obj.getdata();
    cout<<"The Mean is:"<<mean(obj);
    return 0;

}