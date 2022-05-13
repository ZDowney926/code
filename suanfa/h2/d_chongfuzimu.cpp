#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int a[26] = {0};
        for(auto i:s)
        {
            if(int(i) >= 97 && int(i) <= 97+25)
            a[i-97]++;
            if(int(i) >= 65 && int(i) <= 65+25)
            a[i-65]++;
        }
        if(!accumulate(a,a+26,0))
        cout << "no letter" << endl;
        else
        {
            for(int j = 0; j < 26; j++)
            {
                if(a[j] != 0)
                cout << char(j+97) << '-' << a[j] << endl;
            }
            cout << endl;
        }
    }
    return 0;
}