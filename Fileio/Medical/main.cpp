#include<ostream>
#include<string>
#include<fstream>
#include"ui.h"
#include"medicine.h"

using namespace std;

int main()
{
    int choice;
    Medicine customer;
    do 
    {
        UI::showMenu();
        cin>>choice;
        system("cls");
        switch(choice)
        {
            case 1:
            cout<<"You choose to purchase medicine"<<endl;
            customer.purchase();
            break;

            case 2:
            cout<<"Your order is : "<<endl;
            customer.display();
            break;

            case 3:
            cout<<"Serialization completed!"<<endl;
            break;

            case 4:
            cout<<"Deserialization completed!"<<endl;
            break;

            case 5:
            cout<<"You choose to exit!"<<endl;
            cout<<"**Thanks for visiting**"<<endl;
            break;

            default:
            cout<<"Enter valid choice"<<endl;
            break;
        }
    }while(choice!=5);

    return 0;
}