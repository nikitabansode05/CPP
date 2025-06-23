#include<iostream>
using namespace std;

int main()
{
   int day;
   cout<<"enter your choise :";
   cin>>day;
   switch(day)
  {
   case 1:
   cout<<"you can come to college"<<endl;
   break;
   case 2:
   cout<<"you can remain absent"<<endl;
   break;
   default:
   cout<<"please select between 1 and 2";
   break;
   }
return 0;
}

