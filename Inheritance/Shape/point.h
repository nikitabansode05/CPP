#ifndef __POINT_H
#define __POINT_H

#include<iostream>
using namespace std;

class Point
{
 protected:
        int x,y;

 public:
        Point();      
        Point(int xx,int yy);
        void setX(int xx);
        int getX();
        void setY(int yy);
        int getY();
        void display();
};
#endif