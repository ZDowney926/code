#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 3 == 0)
    {
        if(n % 5 == 0)
        {
            if(n % 7 == 0)
            cout << "3 5 7";
            else
            cout << "3 5";
        }
        else
        {
            if(n % 7 == 0)
            cout << "3 7";
            else
            cout << "3";
        }
    }
    else
    {
        if(n % 5 == 0)
        {
            if(n % 7 == 0)
            cout << "5 7";
            else
            cout << "5";
        }
        else
        {
            if(n % 7 == 0)
            cout << "7";
            else
            cout << "n";
        }
    }
    return 0;
}