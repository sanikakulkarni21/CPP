# include <iostream>
# include <string.h>

namespace CRM {
    class customer {
        public:
        int id;
        char fullName[100];
        char contactNumber[10];
        char email[200];
        int age;
    };
}

using namespace std;
int main(){
    CRM::customer theCustomer;
    theCustomer.id=1;
    strcpy(theCustomer.fullName,"sanika");
    strcpy(theCustomer.email,"sanikakulkarni@gmail.com");
    strcpy(theCustomer.contactNumber,"2345456768");
    theCustomer.age=22;
    

    cout<<"Id:"<<theCustomer.id<<endl;
    cout<<"fullName:"<<theCustomer.fullName<<endl;
    cout<<"email:"<<theCustomer.email<<endl;
    cout<<"contactNumber:"<<theCustomer.contactNumber<<endl;
    cout<<"age:"<<theCustomer.age<<endl;
}