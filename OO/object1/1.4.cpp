#include <bits/stdc++.h>
using namespace std;
int check(int x, int y, int n, int m, vector<vector<int>> &v)
{
    for (int i = 0; i < m; i++)
    {
        if (i == y)
            continue;
        if (v[x][i] >= v[x][y])
            return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == x)
            continue;
        if (v[i][y] <= v[x][y])
            return false;
    }
    return true;
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    vector<pair<int, int>> ans;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        cin >> v[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check(i, j, n, m, v))
                ans.push_back({i, j});
        }
    }
    for (auto it : ans)
    {
        cout << it.first+1 << " " << it.second+1 << endl;
    }
}