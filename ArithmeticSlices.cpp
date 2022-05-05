#include <bits/stdc++.h>

using namespace std;

int numberOfArithmeticSlices(vector<int> &nums)
{
    int count = 0;
    if (nums.size() < 3)
        return count;

    vector<int> dp(nums.size() + 1);
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
        {
            dp[i] = dp[i - 1] + 1;
            count += dp[i];
        }
    }

    return count;
}

int main()
{

    return 0;
}