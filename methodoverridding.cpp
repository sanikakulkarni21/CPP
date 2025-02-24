//object oriented programming
// Method Overriding
// is possible only through inheritance
// Inheritance is implemented through child parent class hierarchy

//we need to establish relation between two classes:
//1. Association--------has a relationship
//2. Inheritance--------- is a relationship

#include <iostream>
using namespace std;

class Employee {
   protected:
    string name;
    double basicsalary;
    int workingDays;
    double dailyAllowance;
    public:
    Employee(string empname, double empsalary, int days, double da) {
        this->name = empname;
        this->basicsalary = empsalary;
        this->dailyAllowance=da;
        this->workingDays = days;

    }

   
    virtual double computepay(){
        double package=basicsalary+(workingDays*dailyAllowance);
        return package;
    }
};

class Manager:public Employee {
    private:
    double bonus;
    public:
    //member initializer list
    Manager(string mgrname, double mrgbasicsalary, int days, double da, double incentive):Employee(mgrname, mrgbasicsalary, days, da) {
        this->bonus=incentive;
    }
    //method overriding changing the behavior of the parent class method in derived class
    double computepay() override {
        double package=basicsalary+(workingDays*dailyAllowance)+bonus;
        return package;

    }
};

int main(){
    Employee emp1("sachin pandey",15000,25,500);
    double result=emp1.computepay();
    cout<<"Employee Salary="<<result<<"\n";

    Manager mgr1("Rahul", 25000, 25, 500, 5000);
    double mgrresult=mgr1.computepay();
    cout<<"Manager Salary="<<mgrresult;
    cout<<"\n";

    Employee *pEmployee = new Manager("sanika", 25000, 25, 500, 5000);
    double mgrsalary1=pEmployee->computepay();
    cout<<"Employee Salary="<<mgrsalary1;
    cout<<"\n";

}