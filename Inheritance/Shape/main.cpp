#include<iostream>
#include"line.h"
#include"point.h"
#include"shape.h"
#include"circle.h"

using namespace std;
int main()
{
    Line l1; 
    Point p1(2,3);
    Point p2(4,5);
    Circle c1(p1,3,2,"black");
    Shape s1(3,"gold");

    l1.display();
    c1.display();
    s1.display();
    p1.display();
    return 0;
}