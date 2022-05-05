#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0) return 0;
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
        
    }
    return i+1;
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

    int k =removeDuplicates(v);

    for (int i = 0; i < k; i++)
    {
        cout<<v[i]<<" ";
    }
    
        return 0;
}