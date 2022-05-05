#include <bits/stdc++.h>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;
    unordered_map<int, int> m;
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
    {
        if (m.find(temp[i]) == m.end())
        {
            m[temp[i]] = i;
        }
    }
    for (auto x : nums)
        res.push_back(m.find(x)->second);
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> res = smallerNumbersThanCurrent(nums);
    for (auto x : res)
        cout << x << " ";
    return 0;
}