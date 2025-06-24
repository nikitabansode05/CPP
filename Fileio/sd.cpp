#include<iostream>
#include<fstream>
using namespace std;

class Point
{
    private:
    int x,y;

    public:

    Point()
    {
        x,y=0;
    }

    friend ostream& operator<<(ostream&os ,Point& P)
    {
      os<<"("<<P.x<<","<<P.y<<")";
      return os;
    }

    friend istream& operator>>(istream&is, Point& P)
    {
        cout<<"Enter the x co-ordinate :"<<endl;
        is>>P.x;
        cout<<"Enter the y co-ordinate :"<<endl;
        is>>P.y;

        return is;
    }

    friend Point operator+(Point& a, Point & b);
    friend void serialization(Point p);
    friend void deserialization(Point& p);
};

 Point operator+(Point& a, Point & b)
    {
        Point temp;
        temp.x=a.x+b.x;
        temp.y=a.y+b.y;
        return temp;
    }


void serialization(Point p)
{
 ofstream outFile("Point.txt");
 outFile<<p;
}

void deserialization(Point &p)
{
  ifstream inFile("Point.txt");
  char ch;
  inFile>>ch;
  inFile>>p.x;
  inFile>>ch;
  inFile>>p.y;
  inFile>>ch;
}

int main()
{
    Point P1;
    Point P2;
    Point P4;
    cout<<"Enter the first point :"<<endl;
    cin>>P1;

    cout<<"Enter the second point :"<<endl;
    cin>>P2;

    Point P3=P1+P2;
    cout<<P3<<endl;

    serialization(P3);
    deserialization(P4);

    cout<<"After deserialization :";
    cout<<P4;
    return 0;
}