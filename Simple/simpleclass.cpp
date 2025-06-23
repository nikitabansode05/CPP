// #include<iostream>
// using namespace std;

// class Franchise
// {
//     public:
//     void KFC()
//     {
//         cout<<"We have the best chicken"<<endl;
//     }
//     void BurgerKing()
//     {
//         cout<<"We have best burger";
//     }
// };
// int main()
// {
//     Franchise fran;
//     fran.KFC();
//     fran.BurgerKing();
//     return 0;
// }

#include<iostream>
using namespace std;

class Student{
    public:
    int s1,age;
    void S1(){
        //int age;
        cout<<"Enter the name of first student : ";
        cin>>s1;
        cout<<"Enter the age of student1 : "<<endl;
        cin>>age;
    }
    void student2(){
        cout<<"Enter the name of second student : ";
        cin>>s1;
        cout<<"Enter the age of student2 : ";
        cin>>age;
    }
    void student3(){
        cout<<"Enter the name of third student : ";
        cin>>s1;
        cout<<"Enter the age of student3 : ";
        cin>>age;
    }    

        
    
};
int main()
{
    //cout<<"The data of first student is : "<<endl;
    Student s1;
    s1.S1();
    // Student s2;
    // s2.student2;
    return 0;
}