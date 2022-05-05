#include <bits/stdc++.h>

using namespace std;

// kadane's algo
int kadane_algo(vector<int> arr, int n)
{
    int maxsum = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
            currsum = 0;
    }
    return maxsum;
}
int maxSubarraySumCircular(vector<int> &arr)
{
    int n = arr.size();
    int non_wrap = kadane_algo(arr, n);
    if (non_wrap < 0)
        return non_wrap;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];    
        arr[i] = -arr[i]; 
    }

    int wrap = sum + kadane_algo(arr, n); 
    return max(wrap, non_wrap);
}
int main()
{

    return 0;
}