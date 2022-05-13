#include <bits/stdc++.h>
using namespace std;

double fun(double n)
{
    if(n==0) return 1000;
    else
    {
        return 1.05*fun(n-1)+500;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n);
}