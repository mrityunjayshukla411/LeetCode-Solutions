#include <bits/stdc++.h>

using namespace std;

// vector<int> findDuplicates(vector<int> &nums)
// {
//     unordered_map<int, int> m;
//     int n = nums.size();
//     vector<int> res;
//     for (int i = 0; i < n; i++)
//     {
//         if (m.find(nums[i]) == m.end())
//         {
//             m[nums[i]] = 1;
//         }
//         else
//         {
//             m[nums[i]]++;
//         }
//     }
//     for (auto x : m)
//         if (x.second > 1)
//         {
//             res.push_back(x.first);
//             // cout << x.first << " " << x.second << endl;
//         }

//     return res;
// }
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> res;
    // int n = nums.size();
    for(auto n : nums)
    {
        n = abs(n);
        if (nums[n-1] > 0) 
        {
            nums[n-1] *= -1;
        }
        else
        {
            res.push_back(n);
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
    vector<int> res = findDuplicates(v);
    for (auto x : res)
        cout << x << endl;

    return 0;
}