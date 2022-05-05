#include <bits/stdc++.h>

using namespace std;

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    int ans = 0;
    int ans1 = 0;
    int i = -1;
    while (n >= 2)
    {
        if (cost[n - 1] < cost[n - 2])
        {
            n--;
        }
        else
        {
            n -= 2;
        }
        ans += cost[n];
    }
    while (i < cost.size()-2)
    {
        if (cost[i + 1] < cost[i + 2])
        {
            i++;
        }
        else
        {
            i += 2;
        }
        ans1 += cost[i];
    }
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return ans < ans1 ? ans : ans1;
}

int main()
{

    return 0;
}