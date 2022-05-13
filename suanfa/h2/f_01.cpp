#include <bits/stdc++.h>
using namespace std;

int fun(string s)
{
    int count = 0;
    int flag0 = 0,flag1 = 0;
    for(auto i:s)
    {
        if(i=='0') flag0++;
        if(i=='1') flag1++;
        if(flag0 && flag1)
        {
            count++;
            flag0=0;
            flag1=0;
        }
    }
    return count;
}

int main()
{
    string s;
    cin >> s;
    cout << fun(s);
    return 0;
}