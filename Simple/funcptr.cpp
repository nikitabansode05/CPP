#include<iostream>
using namespace std;

// int add(int a,int b)
// {
//     return a+b;
// }

// int multiply(int a,int b)
// {
//     return a*b;
// }

// int (*ptrfunc)(int,int);

// int main()
// {
//     ptrfunc=multiply;
//     int result=ptrfunc(2,3);
//     cout<<result;
//     return 0;
// }

void print()
{
    cout<<"Hiee"<<endl;
}

void (*ptrfunc)()=print;

int main()
{
    ptrfunc();
    return 0;
}