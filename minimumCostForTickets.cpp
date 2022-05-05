#include <bits/stdc++.h>

using namespace std;

int mincostTickets(vector<int> &nums, vector<int> &costs)
{
    vector<int> marja(367, INT_MAX);
    marja[0] = min(costs[0], min(costs[1], costs[2]));
    for (int i = 1; i < nums.size(); i++)
    {
        marja[i] = costs[0] + marja[i - 1];
        int sath = nums[i] - 7;
        int mont = nums[i] - 30;
        int temp = i;
        while (temp >= 0 and nums[temp] > sath)
            temp--;
        if (temp < 0)
            marja[i] = min(marja[i], costs[1]);
        else
            marja[i] = min(marja[i], marja[temp] + costs[1]);
        temp = i;
        while (temp >= 0 and nums[temp] > mont)
            temp--;
        if (temp < 0)
            marja[i] = min(marja[i], costs[2]);
        else
            marja[i] = min(marja[i], marja[temp] + costs[2]);
    }
    return marja[nums.size() - 1];
}

int main()
{

    return 0;
}