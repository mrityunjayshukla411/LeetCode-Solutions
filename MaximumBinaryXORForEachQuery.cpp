#include <bits/stdc++.h>

using namespace std;

vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
{
    int n = nums.size();
    vector<int> res(n, 0);
    int j = 0;
    // res[0] = nums[0];
    int prev= 0;
    int maxi = pow(2,maximumBit) - 1;
    for (int i = 0; i < n; i++)
    {
        prev ^= nums[j++];
        res[i] ^= maxi ^ prev;
        // prev ^= nums[j++]; 
    }
    reverse(res.begin(),res.end());
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
    int maximumBit;
    cin >> maximumBit;
    vector<int> res = getMaximumXor(v, maximumBit);
    for (auto x : res)
        cout << x << " ";
    return 0;
}