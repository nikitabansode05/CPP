#include"repomanager.h"
#include"account.h"
#include<fstream>
#include<iostream>

using namespace std;

namespace Banking{
 Account RepositoryManager::currentAcc(1,"Nikita Bansode",900);
 void RepositoryManager::saveAccDetails()
 {
    ofstream outFile("Bank.dat");
    if(outFile.is_open())
    {
      currentAcc.serialize(outFile);
      outFile.close();
      cout<<"Serialization completed"<<endl;
    }
 }

  void RepositoryManager::getAccDetails()
 {
    ifstream inFile("Bank.dat");
    if(inFile.is_open())
    {
     currentAcc.deserialize(inFile);
     inFile.close();
     cout<<"deserialization competed"<<endl;
    }
 }


}
 