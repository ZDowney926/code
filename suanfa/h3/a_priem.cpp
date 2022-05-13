#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x,j;
        cin >> x;
        for(j = 2; j < x; j++)
        {
            if(x%j == 0)
            {
                cout << "no" << endl;
                break;
            }
        }
        if(j == x)
            cout << "yes" << endl;
    }
    return 0;
}