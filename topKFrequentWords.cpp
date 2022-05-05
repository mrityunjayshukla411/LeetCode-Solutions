#include <bits/stdc++.h>

using namespace std;

vector<string> topKFrequent(vector<string> &words, int k)
{
    map<string, int> mp;
    vector<string> res;
    for (auto x : words)
    {
        mp[x]++;
    }
    multimap<int, string, greater<int>> mmp;
    for (auto x : mp)
    {
        mmp.insert({x.second, x.first});
    }
    int c = 0;
    for (auto x : mmp)
    {
        res.push_back(x.second);
        c++;
        if (c == k)
            break;
    }
    return res;
}

int main()
{
    vector<string> v = {"i", "love", "leetcode", "i", "love", "coding"};
    vector<string> res = topKFrequent(v, 2);
    return 0;
}