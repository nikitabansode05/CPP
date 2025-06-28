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

class Mammal:public Animal
{
    void mammal()
    {
        cout<<"The animals that give birth to their young ones are called mammals."<<endl;
    }
};

class Human:public Mammal
{
    void human()
    {
        cout<<"Every human is a mammal,and every mammal is animal."<<endl;
    }
};

int main()
{
    return 0;
}