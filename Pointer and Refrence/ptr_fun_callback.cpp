#include<iostream>
#include<cmath>
using namespace std;

int one,two,three,a,b,c,d,e;

void ptrfunc(int(*callback)())
{
    callback();
}

int quad()
{
    cout<<"Enter the first term of equation : ";
    cin>>one;
    cout<<"Enter the second term of equation : ";
    cin>>two;
    cout<<"Enter the third term of equation : ";
    cin>>three;
    cout<<"Your equation is : "<<one<<"x^2+"<<two<<"x+"<<three<<"=0"<<endl;
    a=-two;
    b=(two*two)-(4*one*three);
    c=sqrt(b);
    d=(a+b)/2*one;
    e=(a-b)/2*one;
    cout<<d<<endl;
    cout<<e;
    return 0;

}

int main()
{
    ptrfunc(quad);
    return 0;
}
