#include<iostream>
using namespace std;

class Add
{
 public:
 inline int add(int a,int b)
 {
    return a+b;
 }
 inline int subtract(int a,int b);
 
};

inline int Add::subtract(int a,int b)
 {
    return a-b;
 }

int main()
{
    Add a1;
    int sum=a1.add(5,3);
    int diff=a1.subtract(9,5);
    cout<<sum<<endl;
    cout<<diff;
}