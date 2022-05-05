#include <bits/stdc++.h>

using namespace std;

int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    vector<int> minArr(n+1);
    minArr[n] = 0;
    minArr[n-1] = cost[n-1];

    int i = n-3 ;
    while (i >= 0)
    {
        minArr[i] = cost[i] + min(minArr[i+1],minArr[i+2]);
        i--;
    }
    sort(minArr.begin(),minArr.end());
    return minArr[0];
}

int main()
{

    return 0;
}