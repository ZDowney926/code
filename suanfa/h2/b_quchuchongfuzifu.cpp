#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    while(getline(cin,s))
    {
        for(int i = 0; i < s.length() ; i++)
        {
            int j;
            for(j = 0; j < a.length() ; j++)
            {
                if(a[j] == s[i]) break;
            }
            if(j==a.length())
            a.push_back(s[i]);
        }
        cout << a << endl;
        a.clear();
    }
    return 0;
}