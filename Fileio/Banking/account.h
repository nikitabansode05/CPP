#ifndef __ACCOUNT_H
#define __ACCOUNT_H
#include<string>
using namespace std;

namespace Banking
{
    class Account
    {
        private:
    
        float balance;
        float amt;
        int id;
        string holder;
    
        public:
    
        Account();
        Account(int id,std::string name,float balance);
    
        void setid(int i);
        int getid();   

        void setname(string n);
        string getname();
        
        void setbalance(float b);
        float getbalance();
    
    
        void withdraw();
        void deposit();
    
       friend ostream& operator<<(ostream & os,Account & acc);
       friend istream& operator>>(istream & is,Account & acc);
    
       void serialize(ofstream& outFile);
       void deserialize(ifstream& inFile);
    
       void display();
    };
    
    
}
#endif