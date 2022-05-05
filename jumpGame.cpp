#include <bits/stdc++.h>

using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n);
    dp[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i-1],nums[i] - i);
    }
     for(auto x : dp)
        cout<<x<<endl;
    int i = 0;
    while ( i < n-1)
    {
        if(dp[i] < i + 1 ) return false;
    }
    return true;
    
}

int main()
{

    return 0;
}