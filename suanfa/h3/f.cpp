#include <bits/stdc++.h>
using namespace std;
const int MAX=1010;
int p[MAX],m[MAX][MAX],s[MAX][MAX];
int n;
void MATRIX_CHAIN_ORDER()
{
    for(int i=0;i<=n;i++)
    {
        m[i][i]=0;
    }
    for(int l=2;l<=n;l++)//矩阵链表长度
        for(int i=1;i<=n-l+1;i++)
        {
            int j=i+l-1;
            m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
            s[i][j]=i;
            for(int k=i+1;k<j;k++)
            {
                int t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(t<m[i][j])
                {
                    m[i][j]=t;
                    s[i][j]=k;
                }
            }
        }
}
void PRINT_OPTIMAL_PARENS(int i,int j,int tot)
{
    if(i==j)
    {
        cout<<"A"<<i-1;
        return;
    }
    if(tot!=1)
        cout<<"(";
    PRINT_OPTIMAL_PARENS(i,s[i][j],tot+1);
    //cout<<"s"<<s[i][j]<<endl;
    PRINT_OPTIMAL_PARENS(s[i][j]+1,j,tot+1);
    if(tot!=1)
        cout<<")";
}
int main()
{
    while(cin>>n&&n)
    {
        for(int i=0;i<=n;i++)
        {
            cin>>p[i];
        }
        MATRIX_CHAIN_ORDER();
        PRINT_OPTIMAL_PARENS(1,n,1);
        cout<<endl;
    }
    return 0;
}