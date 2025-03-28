#ifndef __SHAPE_H
#define __SHAPE_H
#include<string>
using namespace std;
namespace Drawing
{
class shape
{
    protected:
         int thickness;
         string color;
    public:
             shape();
             shape(int t, string c);

    void display();

};
}
#endif