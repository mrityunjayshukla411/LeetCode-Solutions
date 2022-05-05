#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second < b.second;
}

void sortMap(map<char, int> &M)
{
    vector<pair<char, int>> A;

    for (auto &x : M)
    {
        A.push_back(x);
    }

    sort(A.begin(), A.end(), cmp);
}

string frequencySort(string s)
{
    string res;
    map<char, int> m;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = 1;
        }
        else
        {
            m[s[i]]++;
        }
    }
    vector<pair<char, int>> A;

    for (auto &x : m)
    {
        A.push_back(x);
    }

    sort(A.begin(),A.end(),cmp);
    reverse(A.begin(),A.end());

    for (auto x : A)
        while (x.second--)
        {
            res += x.first;
        }
    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << frequencySort(s) << endl;
    return 0;
}