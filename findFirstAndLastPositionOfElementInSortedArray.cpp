#include <bits/stdc++.h>

using namespace std;

int upperB(vector<int> v, int low, int high, int val)
{
    int res = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        cout<<"low:- "<<low<<endl;
        cout<<"high:- "<<high<<endl;
        cout<<"mid:- "<<mid<<endl;
        if (v[mid] == val)
        {
            res = mid;
            low = mid + 1;
        }
        
        else if (v[mid] < val)
        {
            low = mid + 1;
        }
        else if (v[mid] > val)
        {
            high = mid - 1;
        }
    }
    return res;
}
int lowerB(vector<int> v, int low, int high, int val)
{
    int res = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        cout<<"low:- "<<low<<endl;
        cout<<"high:- "<<high<<endl;
        cout<<"mid:- "<<mid<<endl;
        if (v[mid] == val)
        {
            res = mid;
            high = mid - 1;
        }
        
        else if (v[mid] < val)
        {
            low = mid + 1;
        }
        else if (v[mid] > val)
        {
            high = mid - 1;
        }
    }
    return res;
}

vector<int> searchRange(vector<int> &nums, int target)
{
        vector<int> res;
    res.push_back(lowerB(nums,0,nums.size()-1,target));
    res.push_back(upperB(nums,0,nums.size()-1,target));
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target = 8;
    cout << upperB(nums, 0, n - 1, target) << endl;
    cout << lowerB(nums, 0, n - 1, target) << endl;
    return 0;
}