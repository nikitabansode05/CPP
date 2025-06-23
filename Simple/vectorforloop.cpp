#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string>fruits={"apple","banana","mango"};
    for(string&str:fruits)
    {
        cout<<str<<endl;
    }

    vector<int>numbers={1,2,3,4,5};
    for(int&num:numbers)
    {
        cout<<num<<endl;
    }
    return 0;
}