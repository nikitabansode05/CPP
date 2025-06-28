#include<iostream>
#include<string>
using namespace std;

class Point
{
 protected:
        int x,y;

 public:
        Point()
        {
            x,y=0;
        }

        Point(int xx,int yy)
        {
            x=xx;
            y=yy;
        }

        void setX(int xx)
        {
            x=xx;
        }

        int getX()
        {
            return x;
        }

        void setY(int yy)
        {
            y=yy;
        }

        int getY()
        {
            return y;
        }

        void display()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
};

class Shape
{
 protected:
        int thickness;
        string color;

 public:
        Shape()
        {
            thickness=0;
            color="red";
        }

        Shape(int t,string clr)
        {
            thickness=t;
            color=clr;
        }

        void display()
        {
            cout<<"Thickness : "<<thickness<<" "<<"color :"<<color<<endl;
        }
};

class Line:Shape
{
 public:
        Point startPoint;
        Point endPoint;

        Line()
        {
            Point pt(0,0);
            startPoint=pt;
            endPoint=pt;
            thickness=0;
            color="black";
        }

        Line(Point pt1, Point pt2,int t,string clr)
        {
            startPoint=pt1;
            endPoint=pt2;
            thickness=t;
            color=clr;
        }

        void display()
        {
            cout<<"Start Point :("<<startPoint.getX()<<","<<startPoint.getY()<<")"<<endl;
            cout<<"End Point :("<<endPoint.getX()<<","<<endPoint.getY()<<")"<<endl;
            cout<<"Thickness :"<<thickness<<endl;
            cout<<"Color :"<<color<<endl;
        }
};

class Circle:Shape
{
 public:
       Point startPoint;
       Point endPoint;
       Point radius;
       Point point;

       Circle()
       {
        Point pt;
        radius=pt;
        point=pt;
        thickness=0;
        color="red";
       }

       Circle(int t,string clr,Point &p)
       {
        radius=p;
        point=p;
        thickness=t;
        color=clr;
       }

       void display()
        {
            cout<<"radius :("<<startPoint.getX()<<","<<startPoint.getY()<<")"<<endl;
            cout<<"Point :("<<startPoint.getX()<<","<<startPoint.getY()<<")"<<endl;
            cout<<"Thickness :"<<thickness<<endl;
            cout<<"Color :"<<color<<endl;
        }
};
int main()
{
    Line L1;
    L1.display();
    return 0;
}