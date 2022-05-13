#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int sx[8]={0,0,1,1,1,-1,-1,-1};
int sy[8]={1,-1,0,1,-1,0,1,-1};
int n,ans=0;
int a[100][100],b[100][100];
 
void dfs(int s,int t)
{
	int x,y;
	if(s==1&&t==n)
	{
		ans++;
		return;
	}
	for(int i=0;i<8;i++)
	{
		x=s+sx[i];
		y=t+sy[i];
		if (x>0&&y>0&&x<=n&&y<=n&&a[x][y]==0&&b[x][y]==0)
		{                                               
			b[x][y]=1;
			dfs(x,y);
			b[x][y]=0;
		}
	}
	return;
}
 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	  for (int j=1;j<=n;j++)
	    cin>>a[i][j];
	memset(b,0,sizeof(b)); 
	b[1][1]=1;
	dfs(1,1);
	cout<<ans<<endl;
	return 0;
}