#include"ui.h"
#include<iostream>

using namespace std;

namespace Banking{

   void UI::menu()
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
   }
}
 