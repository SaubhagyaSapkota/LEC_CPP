//use abstract class and access them using
//base class pointer

#include<iostream>
using namespace std;
class Media 
{
    protected:
    char title[25],pub[25];
    public:
    virtual void readdata();
    virtual void showdata()=0;
};
void Media::readdata(){
    cout<<"Enter title: "<<endl;
    cin>>title;
    cout<<"Enter publication: "<<endl;
    cin>>pub;
}
class Book: public Media{
    private:
        int no_of_pages;
    public:
        void readdata();
        void showdata();
};
void Book::readdata(){
    Media::readdata();
    cout<<"enter number of pages: "<<endl;
    cin>>no_of_pages;
}
void Book::showdata(){
    cout<<"***Data on Book***"<<endl;
    cout<<"Title of book"<<title<<endl;
    cout<<"Publication of book"<<pub<<endl;
    cout<<"Number of pages: "<<no_of_pages<<endl;
}
class DVD: public Media{
    private:
        int dur;
    public:
        void readdata();
        void showdata();
};
void DVD::readdata(){
    Media::readdata();
    cout<<"Enter time duration of DVD: "<<endl;
    cin>>dur;
}
void DVD::showdata(){
    cout<<"***Data on DVD***"<<endl;
    cout<<"Title of DVD: "<<title<<endl;
    cout<<"Publication of DVD: "<<pub<<endl;
    cout<<"Time duration of DVD: "<<dur<<endl;
}
int main(){
    Media *md;
    Book bk;
    md=&bk;
    cout<<"Enter data on book: "<<endl;
    md->readdata();
    md->showdata();

    DVD dv;
    md=&dv;
    cout<<"Enter data on DVD: "<<endl;
    md->readdata();
    md->showdata();
    return 0;
}