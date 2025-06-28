#include"shape.h"
        Shape::Shape()
        {
            thickness=0;
            color="red";
        }

        Shape::Shape(int t,string clr)
        {
            thickness=t;
            color=clr;
        }

        void Shape::display()
        {
            cout<<"Thickness : "<<thickness<<" "<<"color :"<<color<<endl;
        }
