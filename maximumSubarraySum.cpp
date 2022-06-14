#include <bits/stdc++.h>
long long maxSubarraySum(int nums[], int n)
{
    
    long long mx = 0, cm = 0;
    for (int i = 0; i < n; i++)
    {
        if (cm < 0)
            cm = nums[i];
        else
            cm += nums[i];
        mx = max(mx, cm);
    }
    
    return mx;
}