#include <bits/stdc++.h>
using namespace std;

int w[100];
int n = 5, W = 10;
int maxw = 0;
int x[100];

void dfs(int i, int tw, int rw, int op[])
{
	if (i > n)
	{
		if (tw > maxw&&tw <= W)
		{
			maxw = tw;
		}
	}
	else
	{
		if (tw + w[i] <= W)//左剪枝
		{
			op[i] = 1;//选择货物
			dfs(i + 1, tw + w[i], rw - w[i], op);
		}
		if (tw + rw - w[i] > maxw)//右剪枝
		{
			op[i] = 0;//不选择货物
			dfs(i + 1, tw, rw - w[i], op);
		}
	}
}

int main(){
	while(cin>>n){
		cin>>W;
        int rw,tw=0;
		for(int i=0;i<n;i++)
        {
			cin>>w[i];
            rw += w[i];
        }
		dfs(0,tw,rw,x);
        cout << maxw << endl;
	}
	return 0;
}