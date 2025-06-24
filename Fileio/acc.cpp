#include<iostream>
#include<string>
#include<fstream>

using namespace std;
class Account
{
    private:

    float balance;
    float amt;
    int id;
    string holder;

    public:

    Account()
    {
        balance=0;
        amt=0;
        id=0;
        holder="abc";
    }

    Account(int id,string name,float balance)
    {
        this->balance=balance;
        this->id=id;
        holder=name;
    }

    void withdraw()
    {
     cout<<"Enter the amount to withdraw :"<<endl;
     cin>>amt;
     balance=balance-amt;
    }

    void deposit()
    {
     cout<<"Entre the ammount to diposit :"<<endl;
     cin>>amt;
     balance=balance+amt;
    }

   friend ostream& operator<<(ostream & os,Account & acc)
   {
    os<<acc.id<<endl;
    os<<acc.holder<<endl;
    os<<acc.balance<<endl;;
    return os;
   }

   friend istream& operator>>(istream & is,Account & acc)
   {
    is>>acc.id;
    is.ignore();
    getline(is,acc.holder);
    is.ignore();
    is>>acc.balance;
    return is;
   }

void serialize(ofstream& outFile)
{
 outFile<<id<<endl;
 outFile<<holder<<endl;
 outFile<<balance<<endl;
}

void deserialize(ifstream& inFile)
{
 inFile>>id;
 inFile.ignore();
 getline(inFile,holder);
 //inFile.ignore();
 inFile>>balance;
}

void display()
    {
     cout<<"Id :"<<id<<endl;
     cout<<"Name :"<<holder<<endl;
     cout<<"Balance :"<<balance<<endl;
    }
};



int main()
{
    int choice;
    Account a1(1,"Nikita",1000);
    Account a2;

    do
    {
     
     cout<<"*******************************************************************"<<endl;
     cout<<"Enter your choice : "<<endl;
     cout<<"*******************************************************************"<<endl;
     cout<<"1 - Deposit"<<endl;
     cout<<"2 - Withdraw"<<endl;
     cout<<"3 - Serialize"<<endl;
     cout<<"4 - Deserialize"<<endl;
     cout<<"5 - Display original account"<<endl;
     cout<<"6 - Display deserialized account"<<endl;
     cout<<"7 - exit"<<endl;
     cout<<"*******************************************************************"<<endl;
     cin>>choice;
     system("cls");
     switch (choice)
     {
     case 1:
        a1.deposit();
        break;
     
    case 2:
        a1.withdraw();
        break;

    case 3:
        {
            ofstream outFile("Bank.dat");
            if(outFile.is_open())
            {
              a1.serialize(outFile);
              outFile.close();
              cout<<"Serialization completed"<<endl;
            }
        }
        break;
     
    case 4:
    {
        ifstream inFile("Bank.dat");
        if(inFile.is_open())
        {
            a2.deserialize(inFile);
            inFile.close();
            cout<<"deserialization completed"<<endl;
        }
    }
    break;

    case 5:
         a1.display();
         break;
        
     case 6:
         a2.display();
         break;
         

     default:
         cout<<"**Thanks for visiting**";
        break;
     }
    } while (choice!=7);   
}
  