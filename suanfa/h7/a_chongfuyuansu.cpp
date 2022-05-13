#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
ll ans = 0;
int N;
char a[505];
 
bool is_ok(int start,int end,char ch){
	for(int i=start; i<end; i++)
		if(a[i]==ch)
			return 0;
	return 1;
}
 
void solve(int st,int ed){
	if(st==ed){
		ans++;
		for(int i=0; i<N; i++)
			cout << a[i];
		cout << endl;
	}
	for(int i=st; i<=ed; i++)
		if(is_ok(st,i,a[i])){
			swap(a[st],a[i]);
			solve(st+1,ed);
			swap(a[st],a[i]);
		}
}
 
int main(){
 
	cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
	solve(0,N-1);
	cout << ans << endl;
	
	return 0;
}