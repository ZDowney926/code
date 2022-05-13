#include<bits/stdc++.h> 
using namespace std;
int n, a[25], r, t=0, ans;
bool cntuan[25];
void dfs(int cnt, int pos){//cnt:统计选数的个数 pos:从哪个数开始
	if(cnt == r+1){
		for(int i=1; i<=r; i++)
			cout << setw(3) << a[i];//每个数字需要3个场宽  或者 每个元素占三个字符的位置
		cout << endl;
	}
	for(int i=pos; i<=n; i++){
		a[cnt] = i;
		dfs(cnt+1, i+1);
	} 
}
int main(){
	cin >> n >> r;
	dfs(1, 1);
	return 0;
} 
