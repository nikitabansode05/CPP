#include"point.h"

        Point::Point()
        {
            x,y=0;
        }

        Point::Point(int xx,int yy)
        {
            x=xx;
            y=yy;
        }

        void Point::setX(int xx)
        {
            x=xx;
        }

        int Point::getX()
        {
            return x;
        }

        void Point::setY(int yy)
        {
            y=yy;
        }

        int Point::getY()
        {
            return y;
        }

        void Point::display()
        {
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
