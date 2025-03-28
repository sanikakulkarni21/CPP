#ifndef __POINT_H
#define __POINT_H
namespace Drawing
{
class Point
{
    private:
    int x;
    int y;
   
    public:
    void setX(int XX);
    int getX();
    void setY(int YY);
    int getY();
    Point();
    Point(int xx, int yy);
    void display() const;
};
}
#endif