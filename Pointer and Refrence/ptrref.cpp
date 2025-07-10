#include<iostream>
using namespace std;

int main()
{
    int res=100;
    int marks=50;

    int *ptr=NULL;
    ptr=&res;

    cout<<"Original result is : "<<res<<endl;
    cout<<"Ptr to result is : "<<*ptr<<endl;

    int &ref=res;
    ref=marks;
    cout<<"Reference to result is :"<<ref<<endl;
    cout<<"Reference to marks is : "<<ref<<endl;
}
