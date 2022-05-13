#include <bits/stdc++.h>
using namespace std;

class Date //日期
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

class Time //时间
{
    protected:
    int hour,minute,second;
    public:
    Time(int h, int m, int s): hour(h), minute(m), second(s){}
    friend ostream& operator<<(ostream& out,const Time& d);
};
ostream& operator<<(ostream& out,const Time& d)
{
    out << d.hour << "时" << d.minute << "分" << d.second << "秒";
    return out;
}

class Date_Time:public Date,Time
{
    public:
        Date_Time(int y, int m, int d,int h, int min, int s):Date(y,m,d),Time(h,min,s){}
        friend ostream& operator<<(ostream& out,const Date_Time& d);
};
ostream& operator<<(ostream& out,const Date_Time& d)
{
    out << d.year << "年" << d.month << "月" << d.day << "日" << d.hour << "时" << d.minute << "分" << d.second << "秒";
    return out;
}
int main()
{
    int y,m,d,h,min,s;
    cout << "请输入日期：" <<endl;
    cin >> y >> m >> d;
    cout << "请输入时间：" <<endl;
    cin >> h >> min >> s;
    Date A(y,m,d);
    Time B(h,min,s);
    Date_Time C(y,m,d,h,min,s);
    cout << A <<endl;
    cout << B <<endl;
    cout << C <<endl;
}