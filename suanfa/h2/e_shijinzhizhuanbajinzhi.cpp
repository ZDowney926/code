#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n<8)
        cout << n;
    if(n >= 8)
    {
        fun(n/8);
        cout << n%8;
    }
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}