#include<iostream>
using namespace std;

int add(int& num)
{
    num=num+5;
    return num;
}

int sub(int num)
{
    num=num-1;
    return num;
}

void exchange(int& num1,int& num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}   

int main()
{
    int num1=5;
    int num2=10;
    //int result1=add(num1);
    //int result2=sub(5);
    exchange(num1,num2);


    //cout<<result1<<" "<<result2<<endl;
    cout<<num1<<" "<<num2;
    
    return 0;
}


