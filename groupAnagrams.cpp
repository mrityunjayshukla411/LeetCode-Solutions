#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> res;
    map<string,vector<string>> m;
    for(auto eachStr : strs)
    {
        string s2 = eachStr;
        sort(s2.begin(),s2.end());
        m[s2].push_back(eachStr);
    }
    for(auto pair: m)
    {
        res.push_back(pair.second);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    return 0;
}