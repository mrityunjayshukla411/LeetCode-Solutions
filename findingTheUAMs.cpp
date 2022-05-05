#include <bits/stdc++.h>

using namespace std;

vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k)
{
    vector<int> res(k,0);
    unordered_map<int, unordered_set<int>> m;
    for(auto x : logs)
        m[x[0]].insert(x[1]);
    for(auto x : m)
        res[x.second.size()-1]++;
    return res;
}

int main()
{
    int m,n;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>v[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
        
    }
    int k;
    cin>>k;
    vector<int> res = findingUsersActiveMinutes(v,k);
    for(auto x : res)
        cout<<x<<" ";
    return 0;
}