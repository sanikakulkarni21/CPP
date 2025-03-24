#include<iostream>
#include<string.h>
#include <string>

using namespace std;
class Person{
    private:
            int id;
            char * ptrName;
            int age;
    public :

            Person(){
                id=34;
                int size= sizeof(char) * 12;
                ptrName=new char[size];
                strcpy( this->ptrName, "soham");
                age=20;
            }

            Person(int i, char * ptrNm, int a){
                id=i;
                int length=strlen(ptrNm);
                int size= sizeof(char) * length;
                ptrName=new char[strlen(ptrNm)+1];
                strcpy( this->ptrName, ptrNm);
                age=a;
            }


            Person(const Person& other){
                this->id=other.id;
                this->age=other.age;
                ptrName=new char[strlen(other.ptrName)+1];
                strcpy( this->ptrName, other.ptrName);
            }

            void setName(char * pName){
                ptrName=pName;
            }   

            char * getName(){
                return ptrName;
            }

            friend  istream&  operator>>(istream& is,   Person& prn)
            {
                cout << "Person Details Accept from EndUser :"<<endl;
                cout<<"Enter your name:  ";
                is >> prn.ptrName ;
                cout<<endl <<"Enter your are:  ";
                is >> prn.age;
                return is;
            }  
            
            friend  ostream&  operator<<(ostream& os, const Person& prn)
            {
                os<<"Person object: "<<prn.ptrName << " Age: "<<prn.age << endl;
                return os;
            }


           
            ~Person(){
                if(ptrName != NULL){
                    delete [] ptrName;
                }
            }

        };


int main (){

    Person p1;
    char name[12];
    strcpy( name, "sejal kulkarni");

    Person p2(34, name,23);

    

    Person p3(p2);

    cout<<p1<<endl;
    cout<<"P2 "<<p2<<endl;
    cout<<"P3 "<<p3<<endl;

    cout<<"After setting ......"<<endl;
    char anotherName[12];
    strcpy( anotherName, "sanika kulkarni");

    p3.setName(anotherName);
    cout<<"P2 "<<p2<<endl;
    cout<<"P3 "<<p3<<endl;
}