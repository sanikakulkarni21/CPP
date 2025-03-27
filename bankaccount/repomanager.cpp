#include <iostream>
#include <fstream>
#include <string>
# include "repomanager.h"

namespace Banking{
Account RepositoryManager::currentAccount(23, "sanika kulkarni",60000); 
void  RepositoryManager::saveAccountDetails(){
ofstream outFile("accounts.dat");
if (outFile.is_open())
{
    currentAccount.serialize(outFile);
    outFile.close();
    cout << "Object serialized to accounts.dat" << std::endl;
}
}
void    RepositoryManager::getAccountDetails(){
ifstream inFile("accounts.dat");
if (inFile.is_open()) 
{
    currentAccount.deserialize(inFile);
    inFile.close();
    cout << "Object deserialized from accounts.dat" << std::endl;
}  
}
}