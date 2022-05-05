#include <bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0,j = 0;
    vector<int> res;
    while (i < n1 && j < n2)
    {
        if (nums1[i] > nums2[j])
        {
            res.push_back(nums2[j]);
            j++;
        }
        else
        {
            res.push_back(nums1[i]);
            i++;
        }
        
    }
    if (i == n1)
    {
        while (j < n2)
        {
            res.push_back(nums2[j++]);
        }
        
    }
    if (j == n2)
    {
        while (i < n1)
        {
            res.push_back(nums1[i++]);
        }
        
    }
    // for(auto x : res)
    //     cout<<x<<" ";
    // cout<<endl;
    double median;
    int size = res.size();
    if (size%2)
    {
        median = res[size/2];
    }
    else
    {
        median = (res[size/2 -1 ] + res[size/2]) / 2.0;
    }
    
    return median;
    
}

int main()
{
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {4,5,6};
    cout << findMedianSortedArrays(nums1, nums2); 
    return 0;
}