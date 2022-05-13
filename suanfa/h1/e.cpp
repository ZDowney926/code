#include <bits/stdc++.h>
using namespace std;

int fun(int x)
{
    while(x)
    {
        int y;
        y = x % 10;
        x = x/10;
        if(y == 0 || y == 1 || y == 2 || y == 9) return 1;
    }
    return 0;
}

int main()
{
    long long int sum = 0;
    for(int i = 1; i <= 2019; i++)
    {
        if(fun(i))
        sum += i*i;
    }
    cout << sum;
    return 0;
}