#include <bits/stdc++.h>

using namespace std;
// DFS
void dfs(vector<vector<int>> &adj, int i, int V)
{
    // Making it -1 so it isn't visited again 
    adj[i][i] = -1;
    // Checking all possible provinces
    for (int j = 0; j < V; j++)
        if (adj[j][j] == 1 && adj[i][j] == 1)
            dfs(adj, j,V);
}
int numProvinces(vector<vector<int>> isConnected, int V)
{
    // Count Variable to store the number of provinces
    int cnt = 0;
    for (int i = 0; i < V; i++)
    {
        if (isConnected[i][i] == 1)
        {
            dfs(isConnected, i,V);
            cnt++;
        }
    }
    return cnt;
}
// Testing the above code

int main()
{
    vector<vector<int>> v = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    cout<<"The Number of Provinces:- "<<numProvinces(v,v.size())<<endl;
    return 0;
}
// // BFS
// int numProvinces(vector<vector<int>> isConnected, int V) {
//     // V here is number of Vertices in the graph
//     // Now we are initalizing a vector of size V to keep track of the visited nodes
//     vector<bool> visited(V, false);
//     // cnt variable to store the total count of provinces
//     int cnt = 0;
//     // Now we will check all possible provinces 
//     for (int i = 0; i < V; i++)
//     {
//         // If we have already visited a node then we will not visit it again to save time
//         if (visited[i])
//             continue;
//         // Initializing a queue
//         queue<int> q;
//         q.push(i);
//         while (!q.empty())
//         {
//             int x = q.front();
//             q.pop();
//             // Making sure we don't visit node x again 
//             visited[x] = true;
//             // Pushing all the nodes that are connected to x and are not visited yet
//             for (int j = 0; j < isConnected[x].size(); j++)
//             {
//                 if (isConnected[x][j] == 1 && !visited[j])
//                     q.push(j);
//             }
//         }
//         // Incrementing the cnt variable to get the number of provinces 
//         cnt++;
//     }
//     return cnt;
//     }
