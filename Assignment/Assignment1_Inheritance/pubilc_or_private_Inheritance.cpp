#include<iostream>
using namespace std;
class A
{
    private:
    int pvtdataA;
    protected:
    int prodataA;
    public:
    int pubdataA;
};
class B: public A //publicly derived
{
    public:
    void func()
    {
        int a;
        a=pvtdataA; //error not accessible
        a=prodataA;
        a=pubdataA;
    }
};
class C: protected A// protectedly derived
{
    public:
    void func()
    {
        int a;
        a=pvtdataA;// error not accessible
        a=prodataA;
        a=pubdataA;
    }
};
class D: private A // privately derived
{
    public:
    void func()
    {
        int a;
        a=pvtdataA;// error not accessible
        a=prodataA;
        a=pubdataA;
    }

};
int main()
{
    int num;
    B objB;
    num=objB.pvtdataA; //not accessible
    num=objB.prodataA; // not accessible
    num=objB.pubdataA;// yes:pubdata A is public to B
    C objC;
    num=objC.pvtdataA; //not accessible
    num=objC.prodataA; // not accessible
    num=objC.pubdataA;// not accessible:pubdata A is protected to C
    D objD;
    num=objD.pvtdataA;// not accessible
    num=objD.prodataA; // not accessible
    num=objD.pubdataA; // not accessible: pubdata A is private to D

}