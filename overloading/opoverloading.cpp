#include<iostream>
#include<string>
using namespace std;

namespace operatoroverloading{
    class point{
        private:
        int x;
        int y;
        
        public:
            point(){
                x=0;
                y=0;
            }
            point(int a, int b){
                x=a;
                y=b;
            }
            friend ostream& operator<<(ostream& os, const point& p){
                os<<"Point object: "<<p.x<<","<<p.y<<endl;
                return os;
            }
            friend istream& operator>>(istream& is, point& p){
                cout<<"Enter  coordinates "<<endl;
                cout<<"x:  ";    
                is>>p.x;
                cout<<endl<<"y:  ";
                is>>p.y;
                return is;
            }
            point operator+(const point&  other) 
            {
                point pt;
                pt.x = this->x + other.x;
                pt.y = this->y + other.y;
                return pt;
            }

    };
}
using namespace operatoroverloading;
int main(){
    point p1;
    point p2;
    cin>>p1;
    cin>>p2;
    cout<<p1<<endl;
    cout<<p2<<endl;
    
    point p3 = p1 + p2;
    cout << " Addition of two points=" << endl;
    cout << p3;
}