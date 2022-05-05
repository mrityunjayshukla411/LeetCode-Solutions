#include <bits/stdc++.h>

using namespace std;

int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[1],nums[0]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i-2] + nums[i],nums[i-1]);
    }
    return dp[n-1];
    
}

int main()
{

    return 0;
}