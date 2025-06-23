#include<iostream>
using namespace std;
class Person
{
 private:
 char name;
 int id;
 public:
 Person()
 {
  cout<<"Enter your name : ";
  cin>>name;
  cout<<"Enter your id : ";
  cin>>id;
 }
~Person()
{
 cout<<"This is destructor";
}
};

int main()
{
 //Person p1;
 Person();
 return 0;
}