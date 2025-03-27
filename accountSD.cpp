#include<iostream>
#include<fstream>
#include<string>

using namespace std;
namespace Banking {
    class Account{
        private:
            int id;
            string accHolder;
            double balance;

            public:
                Account(int i=0, string name="", double bal=0): id(i), accHolder(name), balance(bal){}
                     
            
            void deposit(double amount) {
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited: " << amount << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
            }

            
            void withdraw(double amount) {
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn: " << amount << endl;
                } else {
                    cout << "Invalid withdrawal amount or insufficient balance!" << endl;
                }
            }

                friend istream& operator>>(istream& is, Account& acc){
                    is>>acc.id;
                    is.ignore();
                    getline(is, acc.accHolder);
                    is>>acc.balance;
                    is.ignore();
                    return is;
                }

                friend ostream& operator<<(ostream& os, const Account& acc){
                    os<<acc.id<<endl;
                    os<<acc.accHolder<<endl;
                    os<<acc.balance<<endl;
                    return os;
                }

                void serialize(const Account& acc) {
                    ofstream outFile("account.dat");
                    if (outFile.is_open()) {
                        outFile << acc;
                        outFile.close();
                        cout << "Account details saved" << endl;
                    } else {
                        cerr << "File opening error for writing" << endl;
                    }
                }
                
                void deSerialize(Account& acc) {
                    ifstream inFile("account.dat");
                    if (inFile.is_open()) {
                        inFile >> acc;
                        inFile.close();
                        cout << "Account data retrieved successfully!" << endl;
                    } else {
                        cerr << "File opening error for reading!" << endl;
                    }
                }
                
                void display() const {
                    cout <<"id: "<<id<< ", holderName: " << accHolder << ", balance " << balance << endl;
                }
     };       
}

using namespace Banking;

int main() {
    Account a1(21, "sanika kulkarni", 9000.99);
    cout << "Initial Account Details:" << endl;
    cout << a1 << endl;

    a1.deposit(1500.0);
    a1.withdraw(2000.0);
    a1.display();

    a1.serialize(a1); 

    Account a2;
    a1.deSerialize(a2); 
    cout << "\nRetrieved Account Details:" << endl;
    cout << a2 << endl;

    return 0;
}
