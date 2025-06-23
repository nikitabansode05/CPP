#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for(int i=0;i<numbers.size();i++)
    {
        cout<<"The numbers are :"<<numbers[i]<<endl;
    }

    vector<string>str;
    str.push_back("Hello");
    str.push_back("World");

    cout<<str[0]<<" " <<str[1]<<endl;

    str.pop_back();
    cout<<str[0]<<" " <<str[1]<<str[2]<<endl;

    str.clear();
    cout<<str[0]<<" " <<str[1]<<endl;

    return 0;
}