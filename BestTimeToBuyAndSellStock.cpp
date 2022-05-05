#include <bits/stdc++.h>

using namespace std;

// int maxProfit(vector<int> &prices)
// {
//     int profit = 0;
//     int n = prices.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (prices[i] < prices[i + 1])
//         {
//             profit += prices[i + 1] - prices[i];
//         }
//     }
//     return profit;
// }
int maxProfit(vector<int> &prices)
{
    int profit = 0, lowest, highest;

    if (prices.size() == 2 && prices[1] > prices[0])
    {
        return prices[1] - prices[0];
    }
    

    for (int i = 0; i < prices.size() - 1; i++)
    {
        if (prices[i] >= prices[i + 1])
            continue;

        lowest = prices[i];
        for (int j = 0; (prices[i] < prices[i + 1] && i < prices.size() - 1); j++)
        {
            i++;
        // cout<<"hellof1"<<endl;
        }

        // i++;
        // cout<<"hellof2"<<endl;
        highest = prices[i];
        // cout<<lowest<<" "<<highest<<endl;
        profit = profit + highest - lowest;
    }
    return profit;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for (int i = 0; i < 0; i++)
    // {
    //     cout<<"Won"<<endl;
    // }

    cout << maxProfit(v) << endl;
    return 0;
}