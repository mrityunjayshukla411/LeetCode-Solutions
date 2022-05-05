#include <bits/stdc++.h>

using namespace std;

int minimumOperations(vector<int> &nums)
{
    map<int,int,greater<int>> mO;
    map<int,int,greater<int>> me;
    int n = nums.size();
    int oddCount = n%2 == 0 ? n/2 : n/2+1;
    int evenCount = n/2;
    for (int i = 0; i < n; i+=2)
    {
        if (m.find(nums[i]) == m.end())
        {
            m[nums[i]] = 1;
        }
        else
        {
            m[nums[i]]++;
        }
    }
    int maxOddOccur = INT_MIN;
    int maxi = INT_MIN;
    for(auto x : mO)
    {
            if(x.second > maxi)
            {
                maxOddOccur = x.first;
                maxi = x.second;
            }
    }
    oddCount -= mO[maxOddOccur];
    for (int i = 1; i < n; i+=2)
    {
        if (m.find(nums[i]) == m.end())
        {
            m[nums[i]] = 1;
        }
        else
        {
            m[nums[i]]++;
        }
    }
    maxOddOccur = INT_MIN;
    maxi = INT_MIN;
    for(auto x : mO)
    {
            if(x.second > maxi)
            {
                maxOddOccur = x.first;
                maxi = x.second;
            }
    }
    evenCount -= me[maxOddOccur];
    return oddCount + evenCount;
}

int main()
{

    return 0;
}