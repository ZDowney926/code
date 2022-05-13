#include <bits/stdc++.h>
using namespace std;
#define Pi 3.1415926


class Circle //圆类
{
    protected:
        double radius;
        Circle(double r):radius(r){}
};

class Ball:public Circle //球类
{
    private:
        double area,volume;
    public:
        Ball(double r): Circle(r){}
        double calculate_area()
        {
            return area = 4.0*Pi*radius*radius;
        }
        double calculate_volume()
        {
            return volume = 4.0/3.0*Pi*radius*radius*radius;
        }
        void out_area()
        {
            cout << "球的表面积是：" << area << endl;
        }
        void out_volume ()
        {
            cout << "球的体积是：" << volume << endl;
        }
};

class Cylinder:public Circle //圆柱类
{
    private:
        double height,area,volume;
    public:
        Cylinder(double r, double h):Circle(r), height(h){}
        double calculate_area()
        {
            return area = (2*Pi*radius*radius)+2*Pi*radius*height;
        }
        double calculate_volume()
        {
            return volume = Pi*radius*radius*height;
        }
        void out_area()
        {
            cout << "圆柱的表面积是：" << area << endl;
        }
        void out_volume ()
        {
            cout << "圆柱的体积是：" << volume << endl;
        }
};

class Circular_Cone:public Circle //圆锥类
{
    private:
        double height,area,volume;
    public:
        Circular_Cone(double r, double h):Circle(r), height(h){}
        double calculate_area()
        {
            return area = Pi*radius*radius+Pi*radius*pow(height*height+radius*radius,2);
        }
        double calculate_volume()
        {
            return volume = 1.0/3.0*Pi*radius*radius*height;
        }
        void out_area()
        {
            cout << "圆锥的表面积是：" << area << endl;
        }
        void out_volume ()
        {
            cout << "圆锥的体积是：" << volume << endl;
        }
};

int main()
{
    double r,h;
    cout << "请输入球的半径：" <<endl;
    cin >> r;
    Ball A(r);
    A.calculate_area();
    A.out_area();
    A.calculate_volume();
    A.out_volume();
    cout << "请输入圆柱的半径：" <<endl;
    cin >> r;
    cout << "请输入圆柱的高：" <<endl;
    cin >> h;
    Cylinder B(r,h);
    B.calculate_area();
    B.out_area();
    B.calculate_volume();
    B.out_volume();
    cout << "请输入圆锥的半径：" <<endl;
    cin >> r;
    cout << "请输入圆锥的高：" <<endl;
    cin >> h;
    Circular_Cone C(r,h);
    C.calculate_area();
    C.out_area();
    C.calculate_volume();
    C.out_volume();
}