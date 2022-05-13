#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    while(m--)
    {
        int n;
        cin >> n;
        int w[n];
        for(int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w,w+n);
        int sum = 0;
        for(int i = 0; i < n-1; i++)
        {
            sum += w[i]*(n-i-1);
        }
        cout << sum/n << endl;
    }
}