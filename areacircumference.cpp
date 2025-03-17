#include <iostream>
//macros
#define PI 4.56
#define OFF 0
#define ON 1

using namespace std;
//Global Variables
//data type  variable_name;
int count=86;

//code segment
//entry point function
int main(){
     cout<<"Welcome to Programming";  
    count=count+1;  //processing :logic
     cout<<"\n Count is : "<<count;//output
    char ch='A'; //variable declaration
    double area=PI*3*3; //processing :logic calculation
     cout<<"\n Area of Circle is "<<area;
    double circumference=2*PI*3; //processing :logic
     cout<<"\n Circumference of Circle is  "<<circumference;
}