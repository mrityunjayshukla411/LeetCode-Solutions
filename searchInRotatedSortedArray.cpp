#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &nums, int target)
{
    vector<int> s1;
    vector<int> s2;
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
        {
            break;
        }
        s1.push_back(nums[i]);
    }
    for (int j = i; j < nums.size(); j++)
    {
        s2.push_back(nums[j]);
    }
    int pos1 = lower_bound(s1.begin(), s1.end(), target) - s1.begin();
    int pos2 = lower_bound(s2.begin(), s2.end(), target) - s2.begin();
    if (s1[pos1] == target)
    {
        return pos1;
    }
    else if (s2[pos2] == target)
    {
        return s1.size() + pos2 + 1;
    }
    return -1;
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
    int target = 4;
    cout << search(nums, target) << endl;
    return 0;
}