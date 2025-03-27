#include"account.h"
#include<iostream>
#include <fstream>
#include <string>
using namespace std;



namespace Banking{
    
        Account::Account(int i , string nm , double amount) : id(i), name(nm), balance(amount) { }
        
        void Account::setId(int i)
        {
            id = i;
        }
        int Account::getId()
        {
            return id;
        }
        void Account::setName(string nm)
        {
            name = nm;
        }
        string Account::getName()
        {
            return name;
        }
        void Account::setBalance(double bal)
        {
            balance = bal;
        }   
        double Account::getBalance()
        {
            return balance;
        }


        void Account::deposite(double amount)
        {
            balance = balance + amount;
        }
        void Account::withdraw(double amount)
        {
            balance = balance - amount;
        }
         istream & operator>>(istream &is, Account &prn)
        {
            is >> prn.id;
            is.ignore();
            getline(is, prn.name);
            is.ignore();
            is >> prn.balance;
            return is;
        }
        ostream & operator<<(ostream &os, const Account &prn)
        {
            os << prn.id << endl;
            os << prn.name << endl;
            os << prn.balance << endl;
            return os;
        }
        void Account::serialize(ofstream &outFile)
        {
            outFile << id << endl;
            outFile << name << endl;
            outFile << balance << endl;
        }
        void Account::deserialize(ifstream &inFile)
        {
            inFile >> id;
            inFile.ignore();
            getline(inFile, name);
            inFile >> balance;
        }
        void Account::display() const
        {
            cout << "Current Acc Details " << endl;
            cout << "Id: " << id << ", Name: " << name << ", balance: " << balance << endl;
        }
    
}