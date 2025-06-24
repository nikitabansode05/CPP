#include"account.h"
#include<fstream>
#include<iostream>

 namespace Banking
 {
    class RepositoryManager
    {
     public:
    
     static Account currentAcc;
     static void saveAccDetails();
     static void getAccDetails();
    };
 }
