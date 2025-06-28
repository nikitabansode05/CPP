#include<iostream>
using namespace std;

class Employee
{
 protected:

 string name;
 double salary;
 int WorkingDays;
 double DailyAllowance;

 public:

 Employee(string EmpName,double EmpSalary,int EmpDays,double EmpAllowance)
 {
  this->name=EmpName;
  this->salary=EmpSalary;
  this->WorkingDays=EmpDays;
  this->DailyAllowance=EmpAllowance;
 }

virtual double ComputePay()
{
    cout<<"The Compute pay of employee is :";
    double package=salary+(WorkingDays*DailyAllowance);
    return package;
}

};

class Manager:public Employee
{
 private:
 double bonus;

 public:
 Manager(string mgrName,double mgrBasicSalary,int days,double DailyAllowance,double Incentive):Employee(mgrName,mgrBasicSalary,days,DailyAllowance)
 {
    this->bonus=Incentive;
 }

 double ComputePay()override
 {
  cout<<"The compute pay of manager is :";
  double package=salary+(WorkingDays*DailyAllowance)+bonus;
  return package;
 }

};


int main()
{
    Employee emp1("Sachin Pandey",15000,25,500);
    double result=emp1.ComputePay();
    cout<<"Employee salary : "<<result;

    Manager mgr1=Manager("seeta kumari",2300,25,1000,33000);
    double mgrResult=mgr1.ComputePay();
    cout<<"Manager salary is :"<<mgrResult;
    
    return 0;
}