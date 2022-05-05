#include <bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    // for(auto x : nums1)
    //     cout<<x<<" ";
    // for(auto x : nums2)
    //     cout<<x<<" ";
    int i = 0, j = 0;
    vector<int> res;
    while (i < n1 && j < n2)
    {
        if (nums1[i] == nums2[j])
        {
            res.push_back(nums1[i]);
            i++ , j++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    return res;
}

int main()
{
    vector<int> v1 = {1,2,2, 1};
    vector<int> v2 = {2, 2};

    vector<int> res = intersect(v1, v2);
    for (auto x : res)
        cout << x << " ";

    return 0;
}