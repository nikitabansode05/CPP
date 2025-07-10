#include<iostream>
using namespace std;

int main()
{
    int marks=50,*ptrMarks,**ptrResult;
    ptrMarks=&marks;
    ptrResult=&ptrMarks;
    cout<<"\nThe marks shown by marks variable are :"<<marks;
    cout<<"\nThe marks thar ptrMarks hold are :"<<*ptrMarks;
    cout<<"\nThe marks thar ptrResult hold are :"<<**ptrResult;
    cout<<"\nThe address of the marks is :"<<ptrMarks;
    cout<<"\nThe address of the ptrMarks is :"<<ptrResult;

    *ptrMarks=*ptrMarks+1;
    cout<<"\nThe marks after increment are :"<<*ptrMarks<<endl;
    cout<<"The marks stored at ptrResult are :"<<**ptrResult<<endl;
    cout<<"The original marks are :"<<marks<<endl;
    cout<<"The adress of marks at ptrMarks is :"<<ptrResult<<endl;
    cout<<"The adress of marks is :"<<ptrMarks<<endl;

    return 0;
}