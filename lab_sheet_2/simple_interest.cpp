// Wap in C++ to calculate Simple Interest from given principle time and rate. Set the rate to 15% as default argument when rate is not provided.
#include<iostream>
using namespace std;

class SimpleInterest
{
    private:
    float principle;
    int time;
    float rate;

    public:
    void interest(float principle, int time, float rate=0.15)
    {
        float Interest = (principle*time*rate);
        cout<<"Simple Interest is:"<<Interest<<endl;
    }
};
int main()
{
    SimpleInterest SI1;
    SI1.interest(100,1);
    SI1.interest(100,2,5);
    return 0;

}