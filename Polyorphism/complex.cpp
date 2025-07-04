#include<iostream>

using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    Complex()
    {
        real=0;
        imaginary=0;
    }

    Complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }

    void display(Complex& C)
    {
        cout<<"The complex number is :"<<endl;
        cout<<C.real<<"+"<<C.imaginary<<"i"<<endl;
    }

    friend Complex operator+(Complex& a,Complex& b)
    {
        Complex temp;
        temp.real=a.real+b.real;
        temp.imaginary=a.imaginary+b.imaginary;
        return temp;
     }
};

int main()
{
    Complex  c1(3,2);
    Complex c2(7,8);
    Complex c3=c1+c2;
    Complex c4;

    c4.display(c3);
}