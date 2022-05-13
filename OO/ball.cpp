#include <bits/stdc++.h>
using namespace std;
#define Pi 3.1415926535;          //赵凯 计科A2001 2017060315

class Point{                                     //球类
    public:
    Point(float a = 0,float b = 0,float c = 0)
    {
        x=a;
        y=b;
        z=c;
    }
        	//全局函数重载输入输出运算符
	friend ostream& operator<<(ostream& os, const Point& c);
	friend istream&  operator>>(istream& is,Point& c);
    private:
        float x,y,z;
};

//输入输出运算符函数的定义
ostream& operator<<(ostream& os, const Ball& c){
	os << c.x << ' ' << c.y << ' ' << c.z;
	return os; //返回ostream对象便于链式表达式
}

istream& operator>>(istream& is, Ball& c){
    is>>c.x>>c.y>>c.z
	return is;
}

int main(){
    Point p1(3,3,3),p2;
    cout << p1 << endl;
    cin >> p2;
    cout << p2;
    return 0;
}