#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    int A=0;
    int a=1;
    for(int i = 1; i <= n; i++)
    {
        int sum = A + a;
        a = A;
        A = sum;
    }
    return A;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}