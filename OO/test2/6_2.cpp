#include<bits/stdc++.h>
using namespace std;

class Shape{
public:
    virtual void set()=0;
    virtual double getArea()=0;
};

class Triangle: public Shape{
    double a, b, c;
public:
    void set(){
        cin >> a >> b;
    }
    double getArea(){
        double p = (a+b+c)/2;
        cout << "Triangle area: " << 0.5*a*b << endl;
        return 0.5*a*b;
    }
};

class Rectangle: public Shape{
    double a, b;
public:
    void set(){
        cin >> a >> b;
    }
    double getArea(){
        cout << "Rectangle area: " << a*b << endl;
        return a*b;
    }
};

class Square: public Shape{
    double a;
public:
    void set(){
        cin >> a;
    }
    double getArea(){
        cout << "Square area: " << a*a << endl;
        return a*a;
    }
};

class Circle: public Shape{
    double const pi = 3.14;
    double radius;
public:
    void set(){
        cin >> radius;
    }
    double getArea(){
        cout << "Circle area: " << pi*radius*radius << endl;
        return pi*radius*radius;
    }
};
int main(){
    Square square;
    Rectangle rectangle;
    Triangle triangle;
    Circle circle;
    Shape *s[4] = {&triangle, &rectangle, &square, &circle};
    double sum;
    for (int i = 0; i < 4; i++) {
        s[i]->set();
        sum += s[i]->getArea();
    }
    cout << "The sum area: " << sum << endl;
}