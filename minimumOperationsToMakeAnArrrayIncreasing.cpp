#include <bits/stdc++.h>

using namespace std;

int minOperations(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] >= nums[i + 1])
        {
            res += abs(nums[i + 1] - nums[i]) + 1;
            nums[i+1] += abs(nums[i + 1] - nums[i]) + 1;
        }
    }

    return res;
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
    cout << minOperations(v) << endl;
    return 0;
}