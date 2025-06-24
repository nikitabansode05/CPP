#include<iostream>
#include<string>
#include<fstream>
#include"account.h"
#include"ui.h"
#include"repomanager.h"


using namespace std;
using namespace Banking;
int main()
{
    int choice;
    //Account RepositoryManager::currentAcc(1,"Nikita Bansode",900);
    Account a1(1,"Nikita",1000);
    Account a2(2,"kalyani",120);
    do
    {
     UI::menu();
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
        RepositoryManager::saveAccDetails();
        }
        break;
     
    case 4:
    {
        RepositoryManager::getAccDetails();
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
    
    return 0;
}