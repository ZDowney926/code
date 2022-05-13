#include<bits/stdc++.h>
using namespace std;
int a[10001]={1},n,toal; 
int search(int ,int);
int print(int);

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
    private:
        int r_long,r_width;     //成员变量长和宽
};

int print(int t)
{
	for(int i=1;i<=t-1;i++)
		cout<<a[i]<<"+";
	cout<<a[t]<<endl;
	toal++;//方案数累加1 
    return 0;
}

int search(int s,int t)
{
	int i;
	for(i=a[t-1];i<=s;i++)  //当前数i要大于前一位数，并且不超过n 
	if(i<n)
	{
		a[t]=i;   //保留当前拆分的数 
		s-=i;  //s减去i剩下的值继续拆分 
		if(s==0)  //s等于0时结束拆分   输出结果 
			print(t);
		else 
			search(s,t+1);  //s>0继续递归 
		s+=i;  //回溯  加上拆分的数  ，以便能产生所有可能的拆分 
	}
	return 0;
}

int main()
{
	cin>>n;
	search(n,1);
 } 