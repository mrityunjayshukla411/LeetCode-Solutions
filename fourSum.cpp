#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    if (n == 0)
    {
        return res;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int target2 = target - nums[i] - nums[j];
            int low = j + 1, high = n - 1;
            while (low < high)
            {
                int sum = nums[low] + nums[high];
                if (sum < target2)
                {
                    low++;
                }
                else if (sum > target2)
                {
                    high--;
                }
                else
                {
                    vector<int> quadruplet(4,0);
                    quadruplet[0] = nums[i];
                    quadruplet[1] = nums[j];
                    quadruplet[2] = nums[low];
                    quadruplet[3] = nums[high];
                    res.push_back(quadruplet);

                    while (low<high && nums[low] == quadruplet[2]) ++low;

                    while (low < high && nums[low] == quadruplet[3]) --high;
                    
                    
                }
                
            }
            while (j + 1 < n && nums[j + 1] == nums[j]) ++j;
        }
        while (i + 1 < n && nums[i + 1] == nums[i])
        {
            ++i;
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
        int target;
        cin >> target;
        vector<vector<int>> res = fourSum(v, target);

        return 0;
    }