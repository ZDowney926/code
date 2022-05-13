#include <bits/stdc++.h>
using namespace std;

int fun(int nums[], int n) 
{
    int sum = 0;
    for(int i = 0;i < n; i++)
        for(int j = i+1; j < n; j++)
        {
            if(nums[i] > nums[j])
            sum++;
        }
    return sum;
}

int main()
{
    int n,a[100000];
    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> a[i] ;
    }
    cout << fun(a,n) << endl;
    return 0;
}