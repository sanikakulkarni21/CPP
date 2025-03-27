#include"uimanager.h"
#include <iostream>
using namespace std;

namespace Banking{
        void UIManager::showMenu(){
            cout<<"Welcome to the Bank"<<endl<<endl;
            cout<<" 1. Show Account Details"<<endl;
            cout<<" 2. Save Account Details"<<endl;
            cout<<" 3. Deposit"<<endl;
            cout<<" 4. withdraw"<<endl;
            cout<<" 5. Exit"<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Enter your option from Menu show above  :";
        }
};
