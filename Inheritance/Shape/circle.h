#ifndef __CIRCLE_H
#define __CIRCLE_H

#include<iostream>
#include"shape.h"
#include"point.h"

class Circle:Shape
{
 public:
       Point startPoint;
       Point endPoint;
       int radius;
       Point point;

       Circle();
       Circle(Point& p,int rad,int t,string clr);

       void display();
};

#endif