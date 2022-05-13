#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf=0x3f3f3f3f;
const int N=200100;
string a,b;
int dp[110][110];
        int dfs(int i,int j){
        if(i==-1||j==-1) return 0;
        if(dp[i][j]) return dp[i][j];
        
        int res=0;
        res=max(dfs(i-1,j),dfs(i,j-1));
        if(a[i]==b[j]) res=max(res,dfs(i-1,j-1)+1);
        dp[i][j]=res;
        cout<<i<<j<<" "<<dp[i][j]<<endl;
        return res; 
        };
        int main(){
        string a,b;
        while(cin>>a>>b){
        
        memset(dp,0,sizeof(dp));
        int ans=0;
        cout<<dfs(a.size()-1,b.size()-1)<<endl;
        
        }
        return 0;
}