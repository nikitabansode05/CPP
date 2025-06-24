#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string s1="hello 23 april";
    istringstream iss(s1);

    string hello;
    string date;

    //string str1;

    //iss>>hello>>date;
    getline(iss,s1);

    cout<<s1;//<<str1;
    return 0;
}