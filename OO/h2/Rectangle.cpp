#include <bits/stdc++.h>
using namespace std;

class Ball                    //矩形类
{
    public:
        Ball()                //无参构造函数
        {
            r_long = 3;
            r_width = 4;
        }
        Ball(int a,int b)     //有参构造函数
        {
            r_long = a;
            r_width = b;
        }
        int comp_area()        //计算面积
        {
            return r_long*r_width;
        }
        int comp_perimeter()    //计算周长
        {
            return 2*(r_long+r_width);
        }
        int get_long()          //返回矩形的长
        {
            return r_long;
        }
        int get_width()         //返回矩形的宽
        {
            return r_width;
        }
    private:
        int r_long,r_width;     //成员变量长和宽
};

int main()
{
    Ball A;             //无参构造矩形对象A
    int a,b;
    cin >> a >> b;
    Ball B(a, b);       //通过a、b构造矩形对象B
    cout << "A的长为：" << A.get_long() << "，宽为：" << A.get_width() << endl;
    cout << "B的长为：" << B.get_long() << "，宽为：" << B.get_width() << endl;
    cout << "A的面积为：" << A.comp_area() << endl;
    cout << "B的周长为：" << B.comp_perimeter() << endl;
    return 0;
}