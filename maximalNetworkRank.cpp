#include <bits/stdc++.h>

using namespace std;

int maximalNetworkRank(int n, vector<vector<int>>& roads) {
    unordered_map<int,int> m;
    for (int i = 0; i < roads.size(); i++)
    {
        if (m.find(roads[i][0] ) == m.end())
        {
            m[roads[i][0]] = 1;
        }
        else
        {
            m[roads[i][0]]++;
        }
    }
    for(auto x : m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
    
}

int main(){
    
    return 0;
}