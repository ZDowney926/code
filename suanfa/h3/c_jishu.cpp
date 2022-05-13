#include <bits/stdc++.h>
using namespace std;

int h[1001];
int main()
{
    int n;
    cin >> n;
    h[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        h[i] = h[i-1];
        if (i % 2 == 0) h[i] = h[i-1] + h[i/2];
    }
    cout << h[n];
    return 0;
}