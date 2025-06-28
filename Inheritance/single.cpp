#include<iostream>
using namespace std;

class Animal
{
 public:
        void property()
        {
         cout<<"All animal are consious."<<endl;
        }
    
};

class Human:public Animal
{
 public:
        void self()
        {
            cout<<"Human is the only animal which is self consious."<<endl;
        }
};

int main()
{
    Human h1;
    h1.property();
    h1.self();
    return 0;
}