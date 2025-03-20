#include<iostream>
#include<string.h>
#include "CRM.h"
using namespace std;
using namespace CRM;



int main(){
    customer c;
    customer theCustomer(2, "sejal", "9876543210", "example@gmail.com", 22);
    
    
    cout<<"customer details of c object"<<endl;
    cout<<"Id:"<<c.getID()<<endl;
    cout<<"fullName:"<<c.getfullName()<<endl;
    cout<<"email:"<<c.getemail()<<endl;
    cout<<"contactNumber:"<<c.getcontactNumber()<<endl;
    cout<<"age:"<<c.getage()<<endl;

    cout<<"customer details of theCustomer object"<<endl;
    cout<<"Id:"<<theCustomer.getID()<<endl;
    cout<<"fullName:"<<theCustomer.getfullName()<<endl;
    cout<<"email:"<<theCustomer.getemail()<<endl;
    cout<<"contactNumber:"<<theCustomer.getcontactNumber()<<endl;
    cout<<"age:"<<theCustomer.getage()<<endl;
}
