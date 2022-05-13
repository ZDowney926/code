#include <bits/stdc++.h>
using namespace std;

class Point
{
    public:
        Point(double i,double j)//构造函数
        {  	x=i;	y=j;  	}
        void Print()
        {  	cout<<'('<<x<<','<<y<<')'<<endl;  }
        friend  double  Distance( Point a, Point b ); //友元声明
    private:
        double x,y;
};

double Distance ( Point a, Point b )   // 类体外定义，无需类名
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt( dx*dx + dy*dy );
}

int main(  )
{
    double d1=3, d2=4, d3=6, d4=8;
    Point  p1( d1, d2 ), p2( d3, d4 );
    p1.Print(  );
    p2.Print(  );
    double d = Distance( p1, p2 ); 
    cout<<"Distance="<<d<<endl;     // 友元调用，同普通函数
}
