#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int i = 0;
    int boughtAt = 0;
    int res = 0;
    while (i < prices.size()-1)
    {
        while (prices[i] > prices[i + 1])
        {
            i++;
        }
        int j = prices.size() - 1;
        while(j > i)
        {
            res = max(res,prices[j] - prices[i]);
        }
        i++;
    }
    return res;
}

int main()
{

    return 0;
}