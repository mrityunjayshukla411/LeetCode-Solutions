#include <bits/stdc++.h>

using namespace std;

int ans;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int sum = 0;
    int res = 10007;
    // int ans;
    for (int i = 0; i < n - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int low = i + 1, high = n - 1;
            int res;
            while (low < high)
            {
                sum = nums[i] + nums[low] + nums[high];
                if (sum == target)
                {
                    while (low < high && nums[low] == nums[low + 1])
                    {
                        low++;
                    }
                    while (low < high && nums[high] == nums[high - 1])
                    {
                        high--;
                    }
                    low++, high--;
                }

                else
                {
                    if (sum < target)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
                if (abs(target - res) > abs(target - sum))
                {
                    res = sum;
                }
                // cout<<"res:- "<<res<<endl;
            }
            ans = res;
        }
    }
    return ans;
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
    int target;
    cin >> target;
    int res = threeSumClosest(v, target);
    cout << res << endl;

    return 0;
}