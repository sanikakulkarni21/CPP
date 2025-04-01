#include <iostream>
using namespace std;


class Shape {
    public:
    void  virtual draw() {
            cout << "Drawing a generic shape" <<endl;
        }
    };
    
    class Circle : public Shape {
    public:
        void draw()  override  {
            cout << "Drawing a circle" <<endl;
        }
    };
    
    class Rectangle : public Shape {
    public:
        void draw()  override  {
            cout << "Drawing a rectangle" <<endl;
        }
    };
     int main() {
        Shape* shape1 = new Circle();
        Shape* shape2 = new Rectangle();
        shape1->draw();  
        shape2->draw();  
    }