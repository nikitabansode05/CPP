#include<iostream>
using namespace std;

class Animal
{
 public:
    void animal()
    {
        cout<<"All animals breath"<<endl;
    }
};

class Mammal
{
 public:
    void mammal()
    {
        cout<<"The animals that give birth to their young ones are called mammals."<<endl;
    }
 
};

class Human:public Mammal,public Animal
{
 public:
    void human()
    {
        cout<<"Every human is a mammal,and every mammal is animal."<<endl;
    }
};


int main()
{
    Human h1;
    h1.animal();
    h1.mammal();
    h1.human();
    return 0;
}