#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum;
    cin >> sum;
    for(int i = 0; i < sum; i++)
    {
        int m, n, com = 1;
        cin >> m >> n;
        for(int j = 1; j < m + n; j++)
        {
            if(m % j == 0 && n % j == 0)
            com = j;
        }
        cout << com << endl;
    }
}