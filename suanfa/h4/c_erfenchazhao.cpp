#include <bits/stdc++.h>
using namespace std;

int fun(int nums[], int target,int n) 
{
    int left = 0; 
    int right = n - 1;

    while(left <= right) 
    {
        int mid = (right + left) / 2;
        if(nums[mid] == target)
        {
            while(nums[mid-1]==target)
            mid-=1;
            return mid+1; 
        }
        else if (nums[mid] < target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int n,a[100000],x;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> a[i] ;
    }
    cin >> x;
    cout << fun(a,x,n) << endl;
    return 0;
}