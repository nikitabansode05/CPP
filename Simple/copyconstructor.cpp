#include<iostream>
#include<string>

using namespace std;

class Copy
{
 private:

 int date;
 string day;
 

 public:
 Copy()
 {  
    date=01;
    day="Monday";
 }

 Copy(int d,string s)
 {
    date=d;
    day=s;
 }

 void display()
 {
    cout<<date<<endl;
    cout<<day;
 }
 
};

int main()
{
   
   Copy c1(5,"Sunday");
   Copy c2;
   int c3;
   c2=c1;

   c2.display();

    return 0;
}