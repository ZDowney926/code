#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    cin >> n;
    double a[n],ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1; i < n; i ++)
    {
        if(a[i]-a[i-1]>ans)
        ans=a[i]-a[i-1];
    }
    cout << ans;
}