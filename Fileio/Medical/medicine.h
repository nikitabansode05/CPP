#ifndef __MEDICINE_H
#define __MEDICINE_H

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Medicine
{
 private:
        int medId;
        string name;
        string category;
        float price;
        int quantity;

 public:
        Medicine();
        Medicine(int id,string nm,string ctg,float pr,int qnt);

        void setid(int id);
        int getid();
        void setname(string nm);
        string getname();
        void setcategory(string ctg);
        string getcategory();
        void setprice(float pr);
        float getprice();
        void setquantity(int qt);
        int getquantity();

        friend istream& operator>>(istream& is, Medicine& med);
        friend ostream& operator<<(ostream& os, Medicine& med);

        void serialize(ofstream& outFile);
        void deserialize(ifstream& inFile);

        void purchase();

        void display();

};


#endif