#include <bits/stdc++.h>

using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> res;
    int n = nums.size();
    for (int i = 0; i < n; i+=2)
    {
        while (nums[i]--)
        {
            res.push_back(nums[i+1]);
        }
        
    }
    
}

int main()
{

    return 0;
}