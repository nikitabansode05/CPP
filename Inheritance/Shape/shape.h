#ifndef __SHAPE_H
#define __SHAPE_H

#include<iostream>
#include<string>

using namespace std;
class Shape
{
 protected:
        int thickness;
        string color;

 public:
        Shape();
        Shape(int t,string clr);
        void display();
};
#endif