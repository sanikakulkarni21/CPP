#include <iostream>
#include "shape.h"
#include<string>
using namespace std;
namespace Drawing
{

shape::shape()
{
                  thickness=1;
                  color="black";
                 }
                 shape::shape(int t, string c){
                  thickness=t;
                  color=c;
                 }

    void shape::display(){
        cout<<"Shape attributes: "<<endl;
        cout<<"Thickness: "<<thickness<<endl;
        cout<<"Color: "<<color<<endl;
    }

}