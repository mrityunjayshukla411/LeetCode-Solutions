#include <bits/stdc++.h>

using namespace std;

int minPairSum(vector<int> &v)
{
    sort(v.begin(),v.end());
    int n = v.size();
    int l = 0,r = n-1;
    // for(auto x: v)
    //     cout<<x<<" ";
    // cout<<endl;
    int maxMin = INT_MIN;
    while (l<r)
    {
        // cout<<"Sum:-"<<v[l]+v[r]<<endl;
        // cout<<v[l]<<" "<<v[r]<<endl;
        maxMin = max(maxMin,v[l]+v[r]);
        l++,r--;
    }
    return maxMin;
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
    cout<<minPairSum(v);
    return 0;
}