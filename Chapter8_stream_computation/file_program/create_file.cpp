#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;

    file.open("saubhagya.txt",ios::out);
    if (!file)
    {
        cout<<"error in creating file."<<endl;
    }
cout<<"file created successfully";
file.close();
return 0;
}
