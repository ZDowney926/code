#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int s = 0;
    while(getline(cin,a))
    {
        s = 0;
        for(auto i:a)
        {
            s += int(i-96);
        }
        cout << s/4%10 << endl;
        a.clear();
    }
}  