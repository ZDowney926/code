#include <bits/stdc++.h>
#define max(x,y) (x>y)?x:y
using namespace std;
int dp[100][100];

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
    int n;
    while(cin >> n)
    {
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
            scanf("%d",&dp[i][j]);
    for(i=n-2;i>=0;i--)
        for(j=0;j<=i;j++)
            dp[i][j]+=max(dp[i+1][j],dp[i+1][j+1]);
    printf("%d\n",dp[0][0]);
    }
    return 0;
}