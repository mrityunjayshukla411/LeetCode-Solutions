#include <bits/stdc++.h>

using namespace std;

bool myCmp(vector<int> a, vector<int> b)
{
    return (a[1] < b[1]);
}

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> res;
    for(auto interval : intervals)
    {
        if(res.empty() || res.back()[1] < interval[0])
        {
            res.push_back(interval);
        }
        else
        {
            res.back()[1] = max(res.back()[1],interval[1])
        }
    }
    return res;
}

int main()
{

    return 0;
}