#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
    string name;
    double basicSalary;
    double pf;
    double bonus;

    public:
     Employee(string empName, double basic, double pfValue, double bonusValue)
     :name(empName), basicSalary(basic), pf(pfValue), bonus(bonusValue){}


     virtual void ComputePay(){
        double totalSalary = basicSalary + pf + bonus;
        cout<<"Employee"<< name <<"Salary Details"<<endl;
        cout<<"Basic Salary: "<< basicSalary <<endl;
        cout<<"Provident Fund Deduction: "<< pf <<endl;
        cout<<"Bonus: "<< bonus <<endl;
        cout<<"Total Salary: "<< totalSalary <<endl;

     }
        virtual ~Employee(){} 
};

class SalesEmployee : public Employee {
    protected:
    double Commission;

    public:
    SalesEmployee(string empName, double basic, double pfValue, double bonusValue, double comm)
    : Employee(empName, basic, pfValue, bonusValue), Commission(comm) {}

    void ComputePay() override {
        double totalSalary = basicSalary + pf + bonus + Commission;
        cout<<"Sales Employee"<< name <<"Salary Details"<<endl;
        cout<<"Basic Salary: "<< basicSalary <<endl;
        cout<<"Provident Fund Deduction: "<< pf <<endl;
        cout<<"Bonus: "<< bonus <<endl;
        cout<<"Sales Commission: "<< Commission <<endl;
        cout<<"Total Salary: "<< totalSalary <<endl;
    }
    virtual ~SalesEmployee(){}
};

class salesManager : public SalesEmployee {
    private:
    double managerBonus;

    public:
    salesManager(string empName, double basic, double pfValue, double bonusValue, double comm, double mgrBonus)
    : SalesEmployee(empName, basic, pfValue, bonusValue, comm), managerBonus(mgrBonus) {}

    void ComputePay() override {
        double totalSalary = basicSalary + pf + bonus + Commission + managerBonus;
        cout<<"Sales Manager"<< name <<"Salary Details"<<endl;
        cout<<"Basic Salary: "<< basicSalary <<endl;
        cout<<"Provident Fund Deduction: "<< pf <<endl;
        cout<<"Bonus: "<< bonus <<endl;
        cout<<"Sales Commission: "<< Commission <<endl;
        cout<<"Target Achieved: "<< managerBonus <<endl;
        cout<<"Total Salary: "<< totalSalary <<endl;
    }
    virtual ~salesManager(){}
};

int main(){

    Employee emp1("Sanika Kulkarni", 50000, 5000, 2000);
    salesManager emp2("Sejal Kulkarni", 60000, 6000, 2500, 4000, 5000);
    SalesEmployee emp3("Sarthak Kadam", 45000, 4000, 1500, 3000);

    emp1.ComputePay();
    cout << endl;

    emp2.ComputePay();
    cout << endl;

    emp3.ComputePay();
    return 0;
}