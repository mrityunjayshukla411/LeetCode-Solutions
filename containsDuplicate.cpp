#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) != m.end())
        {
            return true;
        }
        else
        {
            m.insert(nums[i]);
        }
        
    }
    
    return false;
}

int main()
{
    vector<int> v = {1, 2, 3, 1};
    if (containsDuplicate(v))
    {
        cout<<"Hello"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    return 0;
}