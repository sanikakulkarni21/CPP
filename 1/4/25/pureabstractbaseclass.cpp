#include<iostream>
using namespace std;

class Shape{
    public:
    virtual double calculateArea() const=0;
    virtual double calculatePerimeter() const=0;
};

class Circle:Shape{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}

    double calculateArea() const override{
        return 3.14*radius*radius;
    }
    double calculatePerimeter() const override{
        return 2*3.14*radius;
    }
};

class Rectangle:Shape{
    private:
    double length;
    double width;
    public:
    Rectangle(double l,double w):length(l),width(w){}

    double calculateArea() const override{
        return length*width;
    }
    double calculatePerimeter() const override{
        return 2*(length+width);
    }
};

int main(){
    Shape* pCircle = (Shape*) new Circle(28);
    Shape* pRectangle = (Shape*) new Rectangle(30,40);

    double cArea=pCircle->calculateArea();
    double cPerimeter=pCircle->calculatePerimeter();


    double rArea=pRectangle->calculateArea();
    double rPerimeter=pRectangle->calculatePerimeter();

    cout<<"Area of Circle: "<<cArea<<endl;
    cout<<"Perimeter of Circle: "<<cPerimeter<<endl;
    cout<<"Area of Rectangle: "<<rArea<<endl;   
    cout<<"Perimeter of Rectangle: "<<rPerimeter<<endl;

  
}