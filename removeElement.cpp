#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
        
    }
    // cout<<"j:- "<< j<<endl;
    return j;
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
    int val;
    cin >> val;
    int k = removeElement(v, val);
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}