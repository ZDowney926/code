#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<typeinfo>
using namespace std;
template <typename T>
void Exchange(T& a,T& b)
{
    T c = a;
    a = b;
    b = c;
}
class Date
{
    protected:
    int year,month,day;
    public:
    Date(int y, int m, int d): year(y), month(m), day(d){}
    friend ostream& operator<<(ostream& out,const Date& d);
};
ostream& operator<<(ostream& out,const Date& d)
{
    out << d.year << "年" << d.month << "月" << d.day << "日";
    return out;
}
int main()
{
   int a, b; //定义整型变量
   double c, d; //定义浮点型变量
   int y1, m1, d1, y2, m2, d2;
   cin >> a >> b >> c >> d >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
   Date day1(y1, m1, d1), day2(y2, m2, d2); //定义Date型变量

   cout<<"互换前a与b为："<<a<<", "<<b<<endl;//参照输出示例，输出互换前a与b的值
   Exchange(a, b); //调用模板函数void Exchange(int,int)
   cout<<"互换后a与b为："<<a<<", "<<b<<endl;//参照输出示例，输出互换后a与b的值

   cout<<"互换前c与d为："<<setprecision(2)<<setiosflags(ios::fixed)<<c<<", "<<d<<endl;//参照输出示例，输出互换前c与d的值，要求小数点后必须保留2位有效数字（四舍五入），不足补零
   Exchange(c, d); //调用模板函数void Exchange(double,double)
   cout<<"互换后c与d为："<<setprecision(2)<<setiosflags(ios::fixed)<<c<<", "<<d<<endl;//参照输出示例，输出互换后c与d的值，要求小数点后必须保留2位有效数字（四舍五入），不足补零

   cout<<"互换前day1与day2为："<<day1<<", "<<day2<<endl;//参照输出示例，输出互换前day1与day2的值
   Exchange(day1, day2); //调用模板函数void Exchange(Date,Date)
   cout<<"互换后day1与day2为："<<day1<<", "<<day2<<endl;//参照输出示例，输出互换后day1与day2的值
   return 0;
}