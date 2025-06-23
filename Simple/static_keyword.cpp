#include<iostream>
using namespace std;

class Person
{
    public:
    static int count;
    int height;
    int weight;

    public:

    Person()
    {
        cout<<"Default Constructor"<<endl;
        height=0;
        weight=0;
        count++;
    }

    Person(int h,int w)
    {
        cout<<"Parametrized Constructor"<<endl;
        height=h;
        weight=w;
        count++;
    }

    ~Person()
    {
        cout<<"Destructor"<<endl;
        count--;
    }
};

int Person::count=0;

int main()
{
    Person p1;
    Person p2;
    Person p3(5,50);
    cout<<"The number of object is :"<<Person::count<<endl;

    for(int i=0;i<=2;i++)
    {
        Person p4;
        Person p5;
    }

    cout<<"The number of object is :"<<Person::count<<endl;
    return 0;

}