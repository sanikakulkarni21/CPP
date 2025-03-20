#include<iostream>
#include<string.h>
#include "CRM.h"
using namespace std;
using namespace CRM;



int main(){
    customer theCustomer;
    theCustomer.setId(1);
    theCustomer.setfullName("sanika");
    theCustomer.setemail("sanikakulkarni@gmail.com");
    theCustomer.setcontactNumber("2345456768");
    theCustomer.setage(22);
    

    cout<<"Id:"<<theCustomer.getID()<<endl;
    cout<<"fullName:"<<theCustomer.getfullName()<<endl;
    cout<<"email:"<<theCustomer.getemail()<<endl;
    cout<<"contactNumber:"<<theCustomer.getcontactNumber()<<endl;
    cout<<"age:"<<theCustomer.getage()<<endl;
}