#include <bits/stdc++.h>
using namespace std;
int dp[10005];
 
int main(){
    int t;
    while(~scanf("%d",&t)){
        dp[2]=1;
        int m;
        m=2;
        while(t--){
            int n;
            scanf("%d",&n);
            if(m>=n)
                printf("%d\n",dp[n]);
            else{
                int i,j;
                for(m=m+1;m<=n;m++){
                        dp[m]=1;
                    //printf("%d %d\n",m,dp[m]);
                    for(j=2;j<m;j++){
                        if(m%j==0){
                            dp[m]+=dp[j];
                        }
                    }
                }
                m--;
                printf("%d\n",dp[n]);
            }
        }
    }
    return 0;
}