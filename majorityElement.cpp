#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &nums)
{
    unordered_map<int ,int> m;
    int n = nums.size();  
    for (int i = 0; i < n; i++)
    {
        if (m.find(nums[i]) == m.end())
        {
            m[nums[i]] = 1;
        }
        else
        {
            m[nums[i]]++;
        }
        
    }
    for(auto x : m)
    {
        if (x.second > n/2)
        {
            return x.first;
        }
        
    }
    return -1;
    
}

int main()
{

    return 0;
}