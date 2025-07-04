#include<iostream>
#include<string>

using namespace std;

class Person
{
 private:
    int id;
    string name;
    int age;

 public:

 friend istream& operator>>(istream& is, Person& P);

 friend ostream& operator<<(ostream& os,Person& P);
};

 istream& operator>>(istream& is, Person& P)
 {
    cout<<"Enter the id :"<<endl;
    is>>P.id;
    cout<<"Enter the name :"<<endl;
    is>>P.name;
    cout<<"Enter the age :"<<endl;
    is>>P.age;

    return is;
 }

 ostream& operator<<(ostream& os,Person& P)
 {
    os<<"ID :"<<P.id<<"  "<<"Name :"<<P.name<<"  "<<"Age :"<<P.age;
    return os;
 }

 int main()
 {
    Person P1;
    cout<<"Enter the person details"<<endl;
    cin>>P1;

    cout<<"The details that you've entered are :"<<endl;
    cout<<P1;

    return 0;

 }