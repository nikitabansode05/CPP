#include<iostream>
using namespace std;

int add(int a,int  b)
{
    return a+b;
}

int multiply(int a,int b)
{
    return a*b;
}

int operation(int a,int b,int (*ptrfunc)(int,int)) 
{
    int result=ptrfunc(a,b);
    cout<<"Opertion is :"<<result<<endl;
    return 0;
}

int main()
{
    operation(6,7,add);
    operation(5,6,multiply);
    return 0;
}