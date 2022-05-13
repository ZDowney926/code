#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n==0)
    return 0;
    return n+fun(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}