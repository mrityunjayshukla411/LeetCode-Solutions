#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < n-2; i++)
    {
        if(i == 0 || (i>0 && nums[i] != nums[i-1]))
        {
        int low = i+1,high = n-1;
        while (low < high)
        {
            if (nums[low] + nums[high] == ((-1)*nums[i]))
            {
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[low]);
                v.push_back(nums[high]);
                res.push_back(v);
                
                while (low < high && nums[low] == nums[low+1])
                {
                    low++;
                }
                while (low < high && nums[high] == nums[high-1])
                {
                    high--;
                }
                low++,high--;
                
            }
            else
            {
                if (nums[low] + nums[high] < ((-1)*nums[i]))
                {
                    low++;
                }
                else
                {
                    high--;
                }
                
            }
            
        }
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
    vector<vector<int>> res = threeSum(v);


    return 0;
}