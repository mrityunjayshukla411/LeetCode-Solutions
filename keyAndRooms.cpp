#include <bits/stdc++.h>

using namespace std;

bool canVisitAllRooms(vector<vector<int>> &adj)
{
    int V = adj.size();
    vector<vector<int>> res(V);
    for (int i = 0; i < V; i++)
    {
        res[i].push_back(i);
        for (int j = 0; j < adj[i].size(); j++)
        {
            res[i].push_back(adj[i][j]);
        }
    }

    for(auto x : res)
    {
        for(auto y : x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    return 0;
}