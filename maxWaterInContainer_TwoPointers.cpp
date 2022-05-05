#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int start = 0, end = n - 1;
    int maxA = 0;
    while (start < end)
    {
        maxA = max(maxA,(end-start)*min(height[start],height[end]));
        if (height[start] > height[end])
        {
            end--;
        }
        else
        {
            start++;
        }
        
    }
    
    return maxA;
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
    int res = maxArea(v);
    cout << res << endl;
    return 0;
}