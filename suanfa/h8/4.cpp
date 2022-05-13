#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define random(a,b) (rand()%(b-a+1)+a)
#define e 2.71828182
#define Pi 3.141592654
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

int f(int m,int k)
{
	if(m==0||k==1) return 1;
	if(k>m) return f(m,m);
	return f(m-k,k)+f(m,k-1);
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<f(n-k,k);
}