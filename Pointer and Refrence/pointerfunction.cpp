#include<iostream>
using namespace std;

// void(*ptrfunc)();

// void show()
// {
//     cout<<"welcome to show function"<<endl;
    
// }
// void display()
// {
//     cout<<"welcome to display function"<<endl;
// }


// int main()
// {
//     show();
//     ptrfunc=display;
//     ptrfunc();
   
//     return 0;
// }

void execute(void(*callback)())
{
    callback();
}
void walk(){
   cout<<"welcome to walk function"<<endl;
}

void run()
{
    cout<<"wlcome to run function"<<endl;
}

int main()
{
    execute(walk);
    execute(run);
    return 0;
}
