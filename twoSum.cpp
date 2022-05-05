#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    int n = nums.size();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        m.insert({nums[i],i});
    }
    for (int i = 0; i < n; i++)
    {

        if (m.find(target-nums[i]) != m.end() )
        {
            auto it = m.find(target-nums[i]);
            if (i != it->second)
            {
            v.push_back(i);
            v.push_back(it->second);
            break;
            }
            
        }
        
    }
    
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int target;
    cin>>target;
    vector<int> res = twoSum(v,target);
    for(auto x: res)
        cout<<x<<" ";

    return 0;
}