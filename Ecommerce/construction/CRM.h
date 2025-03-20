# include <iostream>
# include <string.h>
using namespace std;
namespace CRM {
    class customer {
        private:
        int Id;
        string fullName;
        string contactNumber;
        string email;
        int age;

        public:
        void setId(int i){
            Id=i;
        }
        int getID(){
            return Id;
        }
        void setfullName(string name){
            fullName=name;
        }
        string getfullName(){
            return fullName;
        }
        void setcontactNumber(string number){
            contactNumber=number;
        }
        string getcontactNumber(){
            return contactNumber;
        }
        void setemail(string mail){
            email=mail;
        }
        string getemail(){
            return email;
        }
        void setage(int a){
            age=a;
        }
        int getage(){
            return age;
        }
      
        //constructor

        //default constructor
        customer(){
            Id=2;
            fullName="sejal";
            contactNumber="9876543210";
            email="example@gmail.com";
            age=22;
        }
        //parameterized constructor
        customer(int i,string name,string number,string mail,int a){
            Id=i;
            fullName=name;
            contactNumber=number;
            email=mail;
            age=a;
        }
    };
}

