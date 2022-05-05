#include <bits/stdc++.h>

using namespace std;

int minTaps(int n, vector<int> &ranges)
{
    vector<int> dp(n + 1, 0);
    for (int i = 0; i < ranges.size(); i++)
    {
        int left = max(0, i - ranges[i]);
        int right = min(n, i + ranges[i]);
        dp[left] = max(dp[left], right);
    }
    // for(auto x : dp)
    //     cout<<x<<" "; 
    int currMax = dp[0];
    int openedTap = 1;
    int nextMax = -1;
    for (int i = 0; i < ranges.size(); i++)
    {
        nextMax = max(nextMax, dp[i]);
        if (i == currMax)
        {
            openedTap++;
            currMax = nextMax;
        }
        if (currMax == n)
        {
            return openedTap;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    // cout<<n<<endl;
    vector<int> v(n + 1);
    for (int i = 0; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << minTaps(n, v);
    return 0;
}