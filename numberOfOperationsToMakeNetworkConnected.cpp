#include <bits/stdc++.h>

using namespace std;


void dfs(vector<vector<int>> &v,vector<bool> visited,int u)
{
    if(visited[u]) return;
    visited[u] = true;
    for (int i = 0; i < v[u].size(); i++)
    {
        dfs(v,visited,v[u][i]);
    }
    
}

int makeConnected(int n, vector<vector<int>> &connections)
{
    if(connections.size() < n-1) return -1;
    vector<bool> visited(n,false);
    vector<vector<int>> adj(n);
    for(auto x : connections)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            dfs(adj,visited,i);
            cnt++;
        }
    }
    return cnt - 1;
}

int main()
{

    return 0;
}
