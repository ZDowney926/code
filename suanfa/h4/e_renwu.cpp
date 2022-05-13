#include <bits/stdc++.h>
using namespace std;

struct renwu
{
    int start,end;
};

bool cmp(renwu a,renwu b)
{
    if(a.end==b.end)
    return a.start<b.start;
    return a.end<b.end;
}

int fun(renwu nums[], int n) 
{
    int sum = 0;
    int end = -1;
    for(int i = 0;i < n; i++)
    {
        if(nums[i].start > end)
        {
            sum++;
            end = nums[i].end;
        }
    }
    return sum;
}

int main()
{
    int m;
    cin >> m;
    while(m--)
    {
        int n;
        renwu a[100000];
        cin >> n;
        for(int i =0; i < n; i++)
        {
            int last;
            cin >> a[i].start >> last;
            a[i].end = last+a[i].start;
        }
        sort(a,a+n,cmp);
        cout << fun(a,n) << endl;
    }
    return 0;
}