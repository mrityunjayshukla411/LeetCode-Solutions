#include <bits/stdc++.h>

using namespace std;

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> res = nums;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        res[index[i]] = nums[i];
    }
    return res;
}

int main()
{

    return 0;
}