#include"account.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

namespace Banking{

    Account::Account()
    {
        balance=0;
        amt=0;
        id=0;
        holder="abc";
    }

    Account::Account(int id,std::string name,float balance)
    {
        this->balance=balance;
        this->id=id;
        holder=name;
    }
   
    void Account::setid(int i)
    { 
     id=i;
    }

    int Account::getid()
    {
        return id;
    }

    void Account::setname(string n)
    { 
     holder=n;
    }

    string Account::getname()
    {
        return holder;
    }

    void Account::setbalance(float b)
    { 
     balance=b;
    }

    float Account::getbalance()
    {
        return balance;
    }

    void Account::withdraw()
    {
     cout<<"Enter the amount to withdraw :"<<endl;
     cin>>amt;
     balance=balance-amt;
    }

    void Account::deposit()
    {
     cout<<"Entre the ammount to diposit :"<<endl;
     cin>>amt;
     balance=balance+amt;
    }

   ostream& operator<<(ostream & os,Account & acc)
   {
    os<<acc.id<<endl;
    os<<acc.holder<<endl;
    os<<acc.balance<<endl;;
    return os;
   }

   istream& operator>>(istream & is,Account & acc)
   {
    is>>acc.id;
    is.ignore();
    getline(is,acc.holder);
    is.ignore();
    is>>acc.balance;
    return is;
   }

void Account::serialize(std::ofstream& outFile)
{
 outFile<<id<<endl;
 outFile<<holder<<endl;
 outFile<<balance<<endl;
}

void Account::deserialize(std::ifstream& inFile)
{
 inFile>>id;
 inFile.ignore();
 getline(inFile,holder);
 //inFile.ignore();
 inFile>>balance;
}

void Account::display()
    {
     cout<<"Id :"<<id<<endl;
     cout<<"Name :"<<holder<<endl;
     cout<<"Balance :"<<balance<<endl;
    }

}
  