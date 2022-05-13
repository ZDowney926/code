#include <bits/stdc++.h>
using namespace std;

int fun(int n, int p)
{
    if(n == p) return 2*p;
    return fun(n-1, p)+n;
}

int main()
{
    int n,p;
    cin >> n >> p;
    cout << fun(n,p) << endl;
    return 0;
}