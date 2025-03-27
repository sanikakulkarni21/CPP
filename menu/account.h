#ifndef __account_h
#define __account_h

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
namespace Banking{

    class Account{
        private:
                int id;
                string name;
                double balance;
        public :
            Account(int i=0, string nm="", double amount=0);

            void setId(int i);
            int getId();
            void setName(string nm);
            string getName();
            void setBalance(double bal);
            double  getBalance();
            
            void deposit(double amount);
            void withdraw(double amount);
            void display() const;
            
            void serialize(std::ofstream& outFile) ;
            void deserialize(std::ifstream& inFile);
           
            friend  istream&  operator>>(istream& is,   Account& prn);
            friend  ostream&  operator<<(ostream& os, const Account& prn);      
    };    
}
#endif