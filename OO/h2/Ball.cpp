#include <bits/stdc++.h>
using namespace std;
#define Pi 3.1415926535;

class Ball{                                     //球类
    public:
        Ball()                                  //无参的构造函数
        {
            ridius = 3;
        }
        Ball(int r)                             //有参的构造函数
        {
            ridius = r;
        }
        Ball(Ball &B)                           //拷贝构造函数
        {
            ridius = B.ridius;
        }
        double comp_area()                      //计算球的面积
        {
            return 4*ridius*ridius*Pi;
        }
        double comp_volume()                    //计算球的体积
        {
            return 4.0/3.0*ridius*ridius*ridius*Pi;
        }
        double get_r()                          //返回球的半径
        {
            return ridius;
        }
        void change_r(double r)                 //改变球的半径
        {
            ridius = r;
        }
    private:
        double ridius;
};

int main(){
    int r;
    cin >> r;               //输入半径
    Ball A(r);              //由输入半径构造球类对象A
    Ball B(A);              //由A拷贝构造球类对象B
    B.change_r(2*B.get_r());//球B的半径翻倍
    cout << "A的表面积是：" << A.comp_area() << "，体积是：" << A.comp_volume() << endl;
    cout << "B的表面积是：" << B.comp_area() << "，体积是：" << B.comp_volume() << endl;
    return 0;
}