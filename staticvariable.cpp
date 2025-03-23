#include <iostream>
#include <string>
using namespace std;


namespace HR{
    class customer{
        public  :
               
                static int count;
                int id;
                string firstName;
                string lastName;
                int age;

                customer(){
                    cout<<"Constructor is called"<<endl;
                    id=11;
                    firstName="sanika";
                    lastName="kulkarni";
                    age=23;
                    count++;
                }

                customer(int i, string fName, string lName,int ag){
                    cout<<" Parameterized Constructor is called"<<endl;
                    id=i;
                    firstName=fName;
                    lastName=lName;
                    age=ag;
                    count++;
                }
    
                ~customer(){
                    cout<<"Destructor is called"<<endl;
                    count--;

                }
            };
}

using namespace HR;
int customer::count=0;

int main(){

    customer p1;
    for(int i=0;i<=3;i++){
    customer p2(45,"Sarthak", "Kadam",22);
    customer p3(65, "Sanika", "Kulkarni",21);
    cout<<endl;
        customer p4(19, "sejal", "kulkarni",21);
        customer p5(6, "vedant", "patil",21);
        customer p7(79, "soham", "kulkarni",21);
        cout<<endl;
        cout<<" Number of objects in Iteration "<< i<<"--> "<<customer::count<<endl;
    }
    cout<<"Number of objects  "<<customer::count<<endl;
}