#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int a = 2; a <= n; a++)
        {
            while(n%a == 0)
            {
                cout << a << ' ';
                n /= a;
            }
        }
        cout << endl;
    }
    return 0;
}