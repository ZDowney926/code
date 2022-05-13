#include <bits/stdc++.h>
using namespace std;
#define Pi 3.1415926

class shape
{
    public:
        virtual double area()=0;
};

class triangle:public shape
{
    private:
        double w,h;
    public:
        triangle(double i, double j):w(i),h(j){};
        double area()
        {
            return w*h*0.5;
        }
};

class cricle:public shape
{
    private:
        double radius;
    public:
        cricle(double r):radius(r){};
        double area()
        {
            return Pi*radius*radius;
        }
};

int main()
{
    shape *s;    
    triangle  tri(3,4);   
    cricle cri(5);
    s=&tri;
    cout<< "The area of triangle: " <<s->area()<<endl;
    s=&cri;
    cout<< "The area of cricle: " <<s->area()<<endl;
}