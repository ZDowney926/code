#include <bits/stdc++.h>
using namespace std;

struct plan
{
    int s,f;
};

bool cmp(plan a,plan b)
{
    return a.f<b.f;
}

int main()
{
    int n;
    cin >> n;
    plan E[n];
    for(int i = 0; i < n; i++)
    {
        cin >> E[i].s >> E[i].f;
    }
    sort(E,E+n,cmp);
    int sum = 0;
    int f0 = -1;
    for(int i=0;i<n;i++)
    {
        if(E[i].s >= f0)
        {
            sum++;
            f0 = E[i].f;
        }
    }
    cout << sum;
}