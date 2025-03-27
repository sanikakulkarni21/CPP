#ifndef __ACCOUNT_H
#define __ACCOUNT_H


#include <fstream>
#include <string>
using namespace std;
namespace Banking
{
    class Account
    {
    private:
       
        int id;
        string name;
        double balance;

    public:
        Account(int i , string nm , double amount) ;

        void setId(int i);
        int getId();
        void setName(string nm);
        string getName();
        void setBalance(double bal);
        double  getBalance();

        void deposite(double amount);
        void withdraw(double amount);
            
        friend istream& operator>>(istream &is, Account &prn);
       
        friend ostream& operator<<(ostream &os, const Account &prn);
        
        void serialize(std::ofstream &outFile);
       
        void deserialize(std::ifstream &inFile);
        
        void display() const;
       
    };
}
#endif