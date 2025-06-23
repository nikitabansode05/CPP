// C++ program to find maximum number.
// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int c=a+b;
//     return c;

// }


// int difference(int x,int y){
//     int p=x-y;
//     int q=y-x;
//     return p,q;

// }
// int difference(int x,int y){
//     int p=x-y;
//     return p;

// }


// int difference(int a,int b){
//     int q=b-a;
//     return q;

// }
// int main(){
//     int num1,num2;
//     cout<<"Enter the value of a : ";
//     cin>>num1;
//     cout<<"Enter the value of b : ";
//     cin>>num2;
//     cout<<"The sum is : "<<sum(num1,num2)<<endl;
//     cout<<"The subrection of second number from the first is : "<<difference(num1,num2);
//     return 0;

// }










#include<iostream>
using namespace std;

// int a=5,b=8;
// int main(){
//     if(a>b){
//         cout<<"The first number is greater";
//     }
//         else{
//             cout<<"The second number is greater";
//         }

//         return 0;
// }

/*TO CHECK THE GREATER NUMBER*/
// int a,b;
// int main(){
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<"Enter the value of b : ";
//     cin>>b;
//     if(a>b){
//         cout<<"a is greater number";
//     }
//     else{
//         cout<<"b is greater number";
//     }
//     return 0;
// }

/*TO CHECK IF THE NUMBER IS DIVISIBLE BY 5 AND 11*/
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    if(a%5==0 && a%11==0)
    cout<<"The number is divisible by 5";
    else
    cout<<"The number is not divisible by 5 and 11";
    return 0;
}
