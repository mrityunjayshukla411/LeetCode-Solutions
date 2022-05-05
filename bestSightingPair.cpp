#include <bits/stdc++.h>

using namespace std;

int maxScoreSightseeingPair(vector<int> &nums)
{
    int n = nums.size();
    int maxEle = nums[0] + 0;
    int res = -1;
    for (int i = 1; i < n; i++)
    {
        res = max(res, maxEle + nums[i] - i);
        maxEle = max(maxEle, nums[i] + i);
    }
    return res;
}

int main()
{

    return 0;
}