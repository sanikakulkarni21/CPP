#include <iostream>
#include "line.h"

using namespace std;
namespace Drawing {
 


             Line::Line(){
                 Point pt(0,0);
                 startPoint=pt;
                 endPoint=pt;
                 thickness=1;
                 color="black";
                 }   
                 Line::Line(Point pt1, Point pt2, int t, string c){
        startPoint=pt1;
        endPoint=pt2;
        thickness=t;
        color=c;
    }

    void Line::display(){
         cout<<"Line attributes: "<<endl;
         cout<<"Start Point: ( "<<startPoint.getX()<<","<<startPoint.getY()<<")"<<endl;
         cout<<"End Point: ("<<endPoint.getX()<<","<<endPoint.getY()<<")"<<endl;
         cout<<"Thickness: "<<thickness<<endl;
         cout<<"Color: "<<color<<endl;
    }
 };