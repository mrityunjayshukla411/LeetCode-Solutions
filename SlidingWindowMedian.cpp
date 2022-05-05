#include <bits/stdc++.h>

using namespace std;

double medianOfVec(vector<int> v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    double res;
    if (n % 2 == 0)
    {
        res = v[n / 2];
    }
    else
    {
        res = (v[n / 2] + v[n / 2 - 1]) / 2;
    }
    return res;
}

vector<double> medianSlidingWindow(vector<int> &nums, int k)
{
    vector<double> res;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> part;
        int l = 0;
        for (int j = i; l < k; j++)
        {
            part.push_back(nums[j]);
        }
        res.push_back(medianOfVec(part));
    }
    return res;
}

int main()
{

    return 0;
}