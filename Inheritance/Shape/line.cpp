#include"line.h"

        Line::Line()
        {
            Point pt(0,0);
            startPoint=pt;
            endPoint=pt;
            thickness=0;
            color="black";
        }

        Line::Line(Point& pt1, Point& pt2,int t,string clr)
        {
            startPoint=pt1;
            endPoint=pt2;
            thickness=t;
            color=clr;
        }

        void Line::display()
        {
            cout<<"Start Point :("<<startPoint.getX()<<","<<startPoint.getY()<<")"<<endl;
            cout<<"End Point :("<<endPoint.getX()<<","<<endPoint.getY()<<")"<<endl;
            cout<<"Thickness :"<<thickness<<endl;
            cout<<"Color :"<<color<<endl;
        }
