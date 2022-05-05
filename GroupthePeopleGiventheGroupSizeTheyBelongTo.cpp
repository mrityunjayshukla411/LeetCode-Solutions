#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    vector<vector<int>> v;
    int n = groupSizes.size();
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(groupSizes[i]) == m.end())
        {
            m[groupSizes[i]].push_back(i);
            continue;
        }
        m[groupSizes[i]].push_back(i);
    }
    for (auto x : m)
    {
        int si = x.second.size();
        si /= x.first;
        int i = 0;
        while((si--))
        {
            vector<int> temp;
            int cnt = 0;
            for (i; i < x.second.size(); i++)
            {
                if(cnt>x.first) break;
                temp.push_back(x.second[i]);
                cnt++;
            }
            v.push_back(temp);
            
        }
    }
    return v;
}
int main()
{

    return 0;
}