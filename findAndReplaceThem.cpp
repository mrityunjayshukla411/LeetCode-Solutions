#include <bits/stdc++.h>

using namespace std;

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> res;
    sort(pattern.begin(), pattern.end());
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i].size() != pattern.length())
        {
            continue;
        }
        int n = pattern.length();
        int j = 0, k = 0;
        bool flag = true;
        string str = words[i];
        sort(words[i].begin(), words[i].end());
        while (j < n - 1 && k < n - 1)
        {
            if (pattern[j] == pattern[j + 1] && words[i][k] != words[i][k + 1])
            {
                flag = false;
                break;
            }
            if (pattern[j] != pattern[j + 1] && words[i][k] == words[i][k + 1])
            {
                flag = false;
                break;
            }
            j++, k++;
        }
        if (flag)
        {
            res.push_back(str);
        }
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
    string pat;
    cin >> pat;
    vector<string> res = findAndReplacePattern(v, pat);
    for (auto x : res)
        cout << x << " ";
    return 0;
}