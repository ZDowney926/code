#include <bits/stdc++.h>
using namespace std;
int n;

bool cmp(int a,int b)
{
    return a>b;
}

int max(int x[])
{
    int maxn = n-1;
    while(maxn--)
    {
        sort(x,x+n);
        x[0] = x[0]*x[1]+1;
        x[1] = INT32_MAX;
    }
    return x[0];
}

int min(int x[])
{
    int minn = n-1;
    while(minn--)
    {
        sort(x,x+n,cmp);
        x[0] = x[0]*x[1]+1;
        x[1] = INT32_MIN;
    }
    return x[0];
}

int main()
{
    cin >> n;
    int x[n],y[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        y[i] = x[i];
    }
    cout << max(x)-min(y);
}