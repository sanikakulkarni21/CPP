#include"point.h"
#include<iostream>
using namespace std;
namespace Drawing{


    void Point::setX(int XX){
        x=XX;
    }
    int Point::getX(){
        return x;
    }
    void Point::setY(int YY){
        y=YY;
    }
    int Point::getY(){
        return y;
    }
    Point::Point(){
        x=y=0;
    
    }
    Point::Point(int xx, int yy){
        x=xx;
        y=yy;
    }
    void Point::display() const {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};