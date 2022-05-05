#include <bits/stdc++.h>

using namespace std;

set<int> visited;
bool dfs(vector<vector<int>>& edges,int u,int v)
{
    if(visited.find(u) == visited.end())
    {
        visited.insert(u);
        if(u == v) return true;
        for(auto x : edges[u])
        {
            if(dfs(edges,x,v)) return true;
        }
    }
    return false;
}

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    vector<vector<int>> graph;
    for (int i = 0; i < 1000; i++)
    {
        vector<int> v;
        graph.push_back(v);
    }
    for(auto x : edges)
    {
        visited.clear();
        if(graph[x[0]].size() != 0 && graph[x[1]].size() != 0 && dfs(graph,x[0],x[1]))
        {
            return x;
        }
        graph[x[0]].push_back(x[1]);
        graph[x[1]].push_back(x[0]);
    }
    return graph[0];
}

int main(){
    
    return 0;
}