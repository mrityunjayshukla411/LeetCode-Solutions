#include <bits/stdc++.h>

using namespace std;

int numIdenticalPairs(vector<int> &v)
{
    unordered_map<int,int> m;
    int n = v.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(m.find(v[i]) != m.end())
        {
            m[v[i]]++;
        }
        else
        {
            m[v[i]] = 1;
        }
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        res += ((it->second)*(it->second-1))/2;
    }
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
    cout<<numIdenticalPairs(v);
    return 0;
}