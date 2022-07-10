#include<iostream>
using namespace std;

template <class T,int size>
class array
{
    private:
    T arr[size];
    public:
    void get_array();
    T find_max();
    T find_min();
};
template<class T,int size>
void array<T, size>::get_array(){
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
template<class T,int size>
T array<T, size>::find_max(){
    T max = arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
template<class T,int size>
T array<T, size>::find_min(){
    T min = arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    array <int,6> a1;
    cout<<"Enter integer number: ";
    a1.get_array();
    cout<<"largest number is:"<<a1.find_max()<<endl;
     cout<<"smallest number is:"<<a1.find_min()<<endl;

     return 0;
}