#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    set<int> s1;
    set<int> s2;
    for (int i = 0; i < nums1.size(); i++)
    {
        s1.insert(nums1[i]);
    }
    for(auto x : nums2)
        if(s1.find(x) != s1.end())
        {
            res.push_back(x);
            s1.erase(x);
        }
    return res;
}

int main()
{
    vector<int> v1 = {4,9,5};
    vector<int> v2 = {9,4,9,8,4};

    vector<int> res = intersection(v1,v2);
    for(auto x :  res)
        cout<<x;

    return 0;
}