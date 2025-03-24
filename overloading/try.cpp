#include<iostream>
using namespace std;
namespace  Drawing{
class Point{
     private : int x;
               int y;
     public  :
            Point(){
                x=0;
                y=0;
            }
            Point(int xx, int yy){
                x=xx;
                y=yy;
            }
            friend istream &operator>>(istream &is, Point&p){
                cout<<"Enter the the value of x"<<endl;
                cout <<"x=";
                is>>p.x;
                cout<<"Enter the value of y"<<endl;
                cout<<"y=";
                is>>p.y;
            }
            friend ostream& operator<<(ostream &os, const Point&p){
               os << p.x <<"+"<< p.y <<endl;
               return os;
            }
            Point operator+(const Point& other) const
            {
                Point po;
                po.x = this->x + other.x;
                po.y = this->x + other.y;
                return po;
            }
            ~Point(){

            }
    };
}
using namespace  Drawing ;
int main(){
    Point p1, p2;
    cin >> p1;
    cin >> p2;
    cout << p1;
    cout << p2;

    Point p3 = p1 + p2;
    cout << " Addition of two points=" << endl;
    cout << p3;
}