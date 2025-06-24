#include"medicine.h"


Medicine::Medicine()
{
 medId=0;
 name="abc";
 category="capsule";
 price=0;
 quantity=0;
}

Medicine::Medicine(int id,string nm,string ctg,float pr,int qnt)
{
    medId=id;
    name=nm;
    category=ctg;
    price=pr;
    quantity=qnt;
}

void Medicine::setid(int id)
{
   medId=id;
}

int Medicine::getid()
{
   return medId;
}

void Medicine::setname(string nm)
{
    name=nm;
}

string Medicine::getname()
{
    return name;
}

void Medicine::setcategory(string ctg)
{
    category=ctg;
}

string Medicine::getcategory()
{
    return category;
}

void Medicine::setprice(float pr)
{
    price=pr;
}

float Medicine::getprice()
{
    return price;
}

void Medicine::setquantity(int qt)
{
    quantity=qt;
}

int Medicine::getquantity()
{
    return quantity;
}

istream& operator>>(istream& is, Medicine& med)
{
 is>>med.medId;
 is.ignore();
 getline(is,med.name);
 is.ignore();
 getline(is,med.category);
 is>>med.price;
 is>>med.quantity;
 return is;
}

ostream& operator<<(ostream& os, Medicine& med)
{
 os<<med.medId<<endl;
 os<<med.name<<endl;
 os<<med.category<<endl;
 os<<med.price<<endl;
 os<<med.quantity<<endl;
 return os;
}

void Medicine::serialize(ofstream& outFile)
{
 outFile<<medId;
 outFile<<name;
 outFile<<category;
 outFile<<price;
 outFile<<quantity;
}

void Medicine::deserialize(ifstream& inFile)
{
 inFile>>medId;
 inFile>>name;
 inFile>>category;
 inFile>>price;
 inFile>>quantity;
}

void Medicine::purchase()
{
    cout<<"Enter the medicine id : ";
    cin>>medId;
    cout<<"Enter medicine name : ";
    cin.ignore();
    getline(cin,name);
    //cin.ignore();
    cout<<"Enter the category :";
    //cin.ignore();
    getline(cin,category);
    cout<<"Enter the price :";
    cin>>price;
    cout<<"Enter quantity :";
    cin>>quantity;
}

void Medicine::display()
{
    cout<<"Medicine ID :"<<medId<<" "<<"Name :"<<name<<" "<<"Category :"<<category<<" "<<"Price :"<<price<<" "<<"Quantity :"<<quantity<<endl;
}

