#include"circle.h"
       Circle::Circle()
       {
        Point pt;
        radius=0;
        point=pt;
        thickness=0;
        color="red";
       }

       Circle::Circle(Point& p,int rad,int t,string clr)
       {
        radius=rad;
        point=p;
        thickness=t;
        color=clr;
       }

       void Circle::display()
        {
            cout<<"radius :"<<radius<<endl;
            cout<<"Point :("<<point.getX()<<","<<point.getY()<<")"<<endl;
            cout<<"Thickness :"<<thickness<<endl;
            cout<<"Color :"<<color<<endl;
        }
