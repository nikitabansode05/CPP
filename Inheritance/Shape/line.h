#ifndef __LINE_H
#define __LINE_H

#include"point.h"
#include"shape.h"

using namespace std;
class Line:Shape
{
 public:
        Point startPoint;
        Point endPoint;

        Line();
        Line(Point& pt1, Point& pt2,int t,string clr);
        void display();
};
#endif