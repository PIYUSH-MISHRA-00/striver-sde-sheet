#include <bits/stdc++.h>

void subsets(vector<int> &nums, int in, set<vector<int>> &s, vector<int> v)
{
    if (in == nums.size())
    {
        s.insert(v);
        return;
    }

    subsets(nums, in + 1, s, v);
    v.push_back(nums[in]);
    subsets(nums, in + 1, s, v);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    set<vector<int>> s;
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());
    subsets(arr, 0, s, {});

    for (auto &v : s)
    {
        ans.push_back(v);
    }

    return ans;
}