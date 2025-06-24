#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void read()
{
    ofstream stream("tfl.txt");
    stream<<"Welcome to file"<<endl;
    stream<<"Have a great day"<<endl;
}

void write()
{
    string sentence;
    ifstream str("tfl.txt");
   
    do{
        str>>sentence;
        cout<<sentence<<" ";
    }while(!str.eof());
}

int main()
{
    write();
    read();
    return 0;
}