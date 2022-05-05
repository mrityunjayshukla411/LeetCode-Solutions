#include <bits/stdc++.h>

using namespace std;

vector<string> subdomainVisits(vector<string> &cpdomains)
{
    unordered_map<string, int> hm;
    for (auto str : cpdomains)
    {
        long val;
        int i = 0;
        string temp;
        while (str[i] != ' ')
        {
            i++;
        }
        val = stol(str.substr(0, i));
        int n = str.length();
        i = n - 1;
        while (isalpha(str[i]))
        {
            while ((str[i] != '.') && (str[i] != ' '))
            {
                i--;
            }
            temp = str.substr(i + 1, n);
            hm[temp] += val;
            i--;
        }
    }
    vector<string> result;
    for (auto &it : hm)
    {
        string str;
        string val = to_string(it.second);
        str = val + ' ' + it.first;
        result.push_back(str);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    vector<string> res = subdomainVisits(v);
    // for (auto x : res)
    //     cout << x << endl;
    return 0;
}