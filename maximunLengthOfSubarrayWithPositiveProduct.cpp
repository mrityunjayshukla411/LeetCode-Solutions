#include <bits/stdc++.h>

using namespace std;

int countNegatives(vector<int> v, int i, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            res++;
        }
    }
    return res;
}

int getMaxLen(vector<int> &nums)
{
    int maxLen = 0;
    int n = nums.size();
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        maxLen++;
        if (nums[0] == 0)
        {
            int x = countNegatives(nums,start,i);
            if(x%2)
            {
                maxLen = max(maxLen,0);
            }
            start = i+1;
        }
        

    }
    
}
int main()
{

    return 0;
}