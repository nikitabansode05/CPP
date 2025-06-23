#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<int,string>person;
    person[1]="Nikita";
    person[2]="Sakshi";
    person[3]="Amrendra";
    person[4]="cookie";

    for(auto & display:person)
    {
     cout<<display.first<<" "<<display.second<<endl;
    }
    return 0;
}