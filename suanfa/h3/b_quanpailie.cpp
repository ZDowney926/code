#include <bits/stdc++.h>
using namespace std;

void perm(char ch[],int s,int t)
{
    int i;
    if(s==t)
    {
        for(i=0;i<=t;i++)
        cout<<ch[i];
        cout<<endl;
    }
    else
    {
        for(i=s;i<=t;i++)
        {
            swap(ch[i],ch[s]);
            perm(ch,s+1,t);
            swap(ch[i],ch[s]);
        }
    }
}
int main()
{
    int i,n,m;
    char ch[1000];
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        cin>>ch[i];
        perm(ch,0,m-1);
        if(n) cout<<endl;
    }
}