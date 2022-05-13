#include<cstdio>
#include<queue>
using namespace std;
priority_queue<int> q;
int D[110],F[110],T[110],f[110][240];//第i个湖减少j个5分钟后每次能钓的鱼数
int n,H,ans=0;
int main()	
{
	scanf("%d %d",&n,&H); H*=60;
	for(int i=1;i<=n;i++) scanf("%d",&F[i]);
	for(int i=1;i<=n;i++)
	{
		int D,del=0;
		scanf("%d",&D);
		for(int t=1;5*t<=H && del<=F[i];t++)
			f[i][t]=F[i]-del,del+=D;
	}
	for(int i=1;i<n;i++) scanf("%d",&T[i]);
	int h=H,count;
	for(int i=1;i<=n;i++)
	{
		count=0,h-=T[i-1]*5;
		while(!q.empty()) q.pop();
		if(h<=0) break;
		
		for(int j=1;j<=i;j++)
			for(int t=1;f[j][t]>0;t++)
				q.push(f[j][t]); 
			
		for(int j=h;j>=1 && !q.empty();j-=5)
		{
			count+=q.top();
			q.pop(); 
		}//printf("h=%d c=%d\n",h,count);
		if(count>ans) ans=count;
	}
	printf("%d",ans);
	return 0;
}