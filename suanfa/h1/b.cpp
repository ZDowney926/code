#include <bits/stdc++.h>
using namespace std;

int main()
{
    char n, s[100];
    int i=0, k=0;
    while(cin >> n)
    {
        if(n == '.')
        break;
        s[i] = n;
        i++;
    }
    for(int j = 0; j < i/2; j++)
    {
        if(s[j] == s[i - j - 1])
        k++;
        else
        break;
    }
    if(k >= i/2)
    cout << "Yes";
    else
    cout << "No";
}