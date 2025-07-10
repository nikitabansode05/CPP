#include<iostream>
using namespace std;

int (*ptrfun)();
int number,i;

int table()
{
    int table;
    cout<<"Enter the number whose table is to be found :";
    cin>>number;
    for(i=1;i<=10;i++)
    {
        cout<<number*i<<endl;
    }
    return 0;
}

int cube()
{
    cout<<"Enter the number whose cube is to be found : ";
    cin>>number;
    cout<<number*number*number;
    return 0;
}

int main()
{
    ptrfun=table;
    ptrfun();
    cube();
    return 0;
}