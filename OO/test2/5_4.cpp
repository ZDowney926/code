#include <bits/stdc++.h>
using namespace std;

class CPoint //二维点
{
    protected:
    double x,y;
    public:
    CPoint(double i, double j): x(i), y(j){} //构造函数
    void set(double i, double j)                //设置坐标
    {
        x = i;
        y = j;
    }
    void get()                //获取坐标
    {
        cout << "该点坐标为:(" << x << ',' << y << ')' << endl;
    }
    void get_polar()                //获取极坐标
    {
        cout << "该点极坐标为:(" << pow(x*x+y*y,0.5) << ',' << atan(y/x) << ')' << endl;
    }
    double distance(CPoint A) //求两点距离
    {
        return pow((A.x-x)*(A.x-x)+(A.y-y)*(A.y-y),0.5);
    }
};

class C3DPoint:public CPoint
{
    protected:
        double z;
    public:
        C3DPoint(int x, int y, int z):CPoint(x,y),z(z){}
        void set(double i, double j, double k)                //设置坐标
        {
            x = i;
            y = j;
            z = k;
        }
        void get()                //获取坐标
        {
            cout << "该点坐标为:(" << x << ',' << y << ',' << z << ')' << endl;
        }
        double distance(C3DPoint A) //求两点距离
        {
            return pow((A.x-x)*(A.x-x)+(A.y-y)*(A.y-y)+(A.z-z)*(A.z-z),0.5);
        }
};

int main()
{
    double x,y;
    cout << "请输入A点坐标：" <<endl;
    cin >> x >> y;
    CPoint A(x,y);
    cout << "请输入B点坐标：" <<endl;
    cin >> x >> y;
    CPoint B(x,y);
    cout << "请修改B点坐标：" <<endl;
     cin >> x >> y;
    B.set(x,y);
    B.get();
    B.get_polar();
    cout << "A、B间距离为：" << B.distance(A) << endl;

    double z;
    cout << "请输入C点坐标：" <<endl;
    cin >> x >> y >> z;
    C3DPoint C(x,y,z);
    cout << "请输入D点坐标：" <<endl;
    cin >> x >> y >> z;
    C3DPoint D(x,y,z);
    cout << "请修改D点坐标：" <<endl;
    cin >> x >> y >>z;
    D.set(x,y,z);
    D.get();
    cout << "C、D间距离为：" << C.distance(D);
}