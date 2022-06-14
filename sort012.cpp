#include <bits/stdc++.h>
void sort012(int *nums, int n)
{
    int start = 0, right = n - 1, i = 0;

    while (i <= right)
    {
        if (nums[i] == 0)
        {
            swap(nums[start], nums[i]);
            start++;
            i++;
        }

        else if (nums[i] == 2)
        {
            swap(nums[i], nums[right]);
            right--;
        }

        else
            i++;
    }
}