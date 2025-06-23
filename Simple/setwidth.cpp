#include<iostream>
#include<iomanip>
using namespace std;

// int c=45;
// int main(){
//     int a,b,c;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<"Enter the value of b : ";
//     cin>>b;
//     c=a+b;
//     cout<<"The value of c is : "<<c<<endl;
//     cout<<"The global c is : "<<::c;
//     return 0;

// }


// int main(){
//     float x=455;
//     float &y=x;
//     cout<<x<<endl;
//     cout<<y;
//     return 0;
// }


// int main(){
//     int a=87.67;
//     cout<<"The value of a in integer is : "<<(int)a;
//     return 0;
// }

int main(){
    int a=98,b=96,c=56;
    cout<<"The value of a is : "<<setw(3)<<a<<endl;
    cout<<"The value of b is : "<<setw(4)<<b<<endl;
    cout<<"The value of c is : "<<setw(5)<<c;
    return 0;
}