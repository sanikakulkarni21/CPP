#include <iostream>
#include <string>
#include "account.h"
#include "repomanager.h"
#include "uimanager.h"
using namespace std;
using namespace Banking;


int main()
{
    int choice;

    do{
            UIManager::showMenu();
            cin>>choice;
            cout<<endl<<"You have selected Option: "<<choice<<endl;
            switch(choice){
                case 1:         
                    cout<<" Your Account Details :"<<endl;
                    RepositoryManager::getAccountDetails();
                    RepositoryManager::currentAccount.display();
                break;
                case 2:
                    cout<<" Saving your  Account Details :"<<endl;
                break;
                case 3:
                        { 
                            RepositoryManager::getAccountDetails();
                            RepositoryManager::currentAccount.display();
                            cout<<endl<<" Depositing Amount: "<<endl;
                            double amount;
                            cout<< "Enter  Amount  to deposit  :";
                            cin>>amount;
                          
                            RepositoryManager::currentAccount.deposite(amount);
                            RepositoryManager::currentAccount.display();
                        }
                break;
                case 4:
                        {
                            RepositoryManager::getAccountDetails();
                            RepositoryManager::currentAccount.display();

                            cout<<endl<<"Withdrawing Amount: "<<endl;
                            double amount;
                            cout<< "Enter  Amount  to withdraw  : ";
                            cin>>amount;
                            cout<<" The amount = "<<amount;
                            RepositoryManager::currentAccount.withdraw(amount);
                            RepositoryManager::currentAccount.display();
                        }
                break;
                case 5:
                    cout<<" You have decided to extit"<<endl;
                break;
            }
        }
    while(choice !=5);
    return 0;
    }