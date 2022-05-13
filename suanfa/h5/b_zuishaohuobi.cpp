#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        int Y[7] = {1,2,5,10,20,50,100},ans[7]={0};
        for(int i = 6; i >=0; i--)
        {
            ans[i] = m/Y[i];
            m %= Y[i];
        }
        for(auto i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}